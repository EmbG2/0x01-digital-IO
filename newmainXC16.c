#include "xc.h"

int main(void) {
    ANSELA = ANSELB = ANSELC = ANSELD = ANSELE = ANSELG = 0x0000;
    
    TRISAbits.TRISA0    = 0; // setting it as output
    
    // assignment part 1
    LATAbits.LATA0      = 1;
//    while{
//    }
    
    
    TRISEbits.TRISE8    = 1; // set as input
    uint8_t t2_status, t2_status_prev;
    
    //assignment part 2
//    while (1){
//        t2_status = !PORTEbits.RE8;
//        if (t2_status){
//            LATAbits.LATA0 = 1;  // turn on led 1
//        } else {
//            LATAbits.LATA0 = 0;  // turn off led 1
//        }
//    }
    
    // assignment part 3 -- rising edge detector
    while (1){
        t2_status = PORTEbits.RE8;
        if (t2_status && !t2_status_prev){
            LATAbits.LATA0 ^= 1;
        }
        t2_status_prev = t2_status;
    }
    
    return 0;
}
