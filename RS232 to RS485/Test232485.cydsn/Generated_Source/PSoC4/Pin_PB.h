/*******************************************************************************
* File Name: Pin_PB.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin_PB_H) /* Pins Pin_PB_H */
#define CY_PINS_Pin_PB_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Pin_PB_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Pin_PB_Write(uint8 value) ;
void    Pin_PB_SetDriveMode(uint8 mode) ;
uint8   Pin_PB_ReadDataReg(void) ;
uint8   Pin_PB_Read(void) ;
uint8   Pin_PB_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Pin_PB_DRIVE_MODE_BITS        (3)
#define Pin_PB_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Pin_PB_DRIVE_MODE_BITS))

#define Pin_PB_DM_ALG_HIZ         (0x00u)
#define Pin_PB_DM_DIG_HIZ         (0x01u)
#define Pin_PB_DM_RES_UP          (0x02u)
#define Pin_PB_DM_RES_DWN         (0x03u)
#define Pin_PB_DM_OD_LO           (0x04u)
#define Pin_PB_DM_OD_HI           (0x05u)
#define Pin_PB_DM_STRONG          (0x06u)
#define Pin_PB_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Pin_PB_MASK               Pin_PB__MASK
#define Pin_PB_SHIFT              Pin_PB__SHIFT
#define Pin_PB_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_PB_PS                     (* (reg32 *) Pin_PB__PS)
/* Port Configuration */
#define Pin_PB_PC                     (* (reg32 *) Pin_PB__PC)
/* Data Register */
#define Pin_PB_DR                     (* (reg32 *) Pin_PB__DR)
/* Input Buffer Disable Override */
#define Pin_PB_INP_DIS                (* (reg32 *) Pin_PB__PC2)


#if defined(Pin_PB__INTSTAT)  /* Interrupt Registers */

    #define Pin_PB_INTSTAT                (* (reg32 *) Pin_PB__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Pin_PB_DRIVE_MODE_SHIFT       (0x00u)
#define Pin_PB_DRIVE_MODE_MASK        (0x07u << Pin_PB_DRIVE_MODE_SHIFT)


#endif /* End Pins Pin_PB_H */


/* [] END OF FILE */
