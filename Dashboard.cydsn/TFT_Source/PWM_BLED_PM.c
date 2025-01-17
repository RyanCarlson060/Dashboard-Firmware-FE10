/*******************************************************************************
* File Name: PWM_BLED_PM.c
* Version 3.20
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_BLED.h"

static PWM_BLED_backupStruct PWM_BLED_backup;


/*******************************************************************************
* Function Name: PWM_BLED_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_BLED_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_BLED_SaveConfig(void) 
{

    #if(!PWM_BLED_UsingFixedFunction)
        #if(!PWM_BLED_PWMModeIsCenterAligned)
            PWM_BLED_backup.PWMPeriod = PWM_BLED_ReadPeriod();
        #endif /* (!PWM_BLED_PWMModeIsCenterAligned) */
        PWM_BLED_backup.PWMUdb = PWM_BLED_ReadCounter();
        #if (PWM_BLED_UseStatus)
            PWM_BLED_backup.InterruptMaskValue = PWM_BLED_STATUS_MASK;
        #endif /* (PWM_BLED_UseStatus) */

        #if(PWM_BLED_DeadBandMode == PWM_BLED__B_PWM__DBM_256_CLOCKS || \
            PWM_BLED_DeadBandMode == PWM_BLED__B_PWM__DBM_2_4_CLOCKS)
            PWM_BLED_backup.PWMdeadBandValue = PWM_BLED_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_BLED_KillModeMinTime)
             PWM_BLED_backup.PWMKillCounterPeriod = PWM_BLED_ReadKillTime();
        #endif /* (PWM_BLED_KillModeMinTime) */

        #if(PWM_BLED_UseControl)
            PWM_BLED_backup.PWMControlRegister = PWM_BLED_ReadControlRegister();
        #endif /* (PWM_BLED_UseControl) */
    #endif  /* (!PWM_BLED_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_BLED_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_BLED_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_BLED_RestoreConfig(void) 
{
        #if(!PWM_BLED_UsingFixedFunction)
            #if(!PWM_BLED_PWMModeIsCenterAligned)
                PWM_BLED_WritePeriod(PWM_BLED_backup.PWMPeriod);
            #endif /* (!PWM_BLED_PWMModeIsCenterAligned) */

            PWM_BLED_WriteCounter(PWM_BLED_backup.PWMUdb);

            #if (PWM_BLED_UseStatus)
                PWM_BLED_STATUS_MASK = PWM_BLED_backup.InterruptMaskValue;
            #endif /* (PWM_BLED_UseStatus) */

            #if(PWM_BLED_DeadBandMode == PWM_BLED__B_PWM__DBM_256_CLOCKS || \
                PWM_BLED_DeadBandMode == PWM_BLED__B_PWM__DBM_2_4_CLOCKS)
                PWM_BLED_WriteDeadTime(PWM_BLED_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_BLED_KillModeMinTime)
                PWM_BLED_WriteKillTime(PWM_BLED_backup.PWMKillCounterPeriod);
            #endif /* (PWM_BLED_KillModeMinTime) */

            #if(PWM_BLED_UseControl)
                PWM_BLED_WriteControlRegister(PWM_BLED_backup.PWMControlRegister);
            #endif /* (PWM_BLED_UseControl) */
        #endif  /* (!PWM_BLED_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_BLED_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_BLED_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_BLED_Sleep(void) 
{
    #if(PWM_BLED_UseControl)
        if(PWM_BLED_CTRL_ENABLE == (PWM_BLED_CONTROL & PWM_BLED_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_BLED_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_BLED_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_BLED_UseControl) */

    /* Stop component */
    PWM_BLED_Stop();

    /* Save registers configuration */
    PWM_BLED_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_BLED_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_BLED_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_BLED_Wakeup(void) 
{
     /* Restore registers values */
    PWM_BLED_RestoreConfig();

    if(PWM_BLED_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_BLED_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
