/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

int main()
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    CyGlobalIntEnable; /* Uncomment this line to enable global interrupts. */
    
    UART_Start();
    
    for(;;)
    {
        /* Place your application code here. */
        if(!Pin_PB_Read())
        {
//            while(!Pin_PB_Read());
            UART_PutChar('1');
        }
    }
}

/* [] END OF FILE */
