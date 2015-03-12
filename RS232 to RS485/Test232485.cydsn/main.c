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
            while(!Pin_PB_Read());
            UART_PutChar('1');
            UART_PutChar('2');
            UART_PutChar('3');
            UART_PutChar('4');
            UART_PutChar('5');
            UART_PutChar('6');
            UART_PutChar('7');
            UART_PutChar('8');
            UART_PutChar('9');
        }
    }
}

/* [] END OF FILE */
