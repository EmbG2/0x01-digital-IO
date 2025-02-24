#include "xc.h"

#define FCY 16000000UL
#include <libpic30.h>

int main(void) {
    ANSELA = ANSELB = ANSELC = ANSELD = ANSELE = ANSELG = 0x0000;
    
    // assignment part 1
//    TRISAbits.TRISA0    = 0; // setting it as output
//    LATAbits.LATA0      = 1;
//    while{
//    }
    
    //assignment part 2
//    TRISAbits.TRISA0    = 0;
//    TRISEbits.TRISE8    = 1;
//    uint8_t t2_status;
    
//    while (1){
//        t2_status = !PORTEbits.RE8;
//        if (t2_status){
//            LATAbits.LATA0 = 1;  // turn on led 1
//            __delay_ms(500);
//        } else {
//            LATAbits.LATA0 = 0;  // turn off led 1
//        }
//    }
    
    TRISEbits.TRISE8 = 1;  // Configure RE8 as input
    TRISAbits.TRISA0 = 0;  // Configure RA0 as output
    
    int prev_state = 0;     // Store previous state of button

    while (1) {
        int curr_state = !PORTEbits.RE8; // Read the button state

        // Detect rising edge (previous state was 0, now it's 1)
        if (curr_state && !prev_state) {
            LATAbits.LATA0 ^= 1;  // Toggle LED
        }

        prev_state = curr_state; // Update previous state
    }
    
    return 0;
}