#include "xc.h"

#define FCY 16000000UL
#include <libpic30.h>

int main(void) {
    ANSELA = ANSELB = ANSELC = ANSELD = ANSELE = ANSELG = 0x0000;
    
    TRISAbits.TRISA0    = 0; // setting it as output
    
    // assignment part 1
    LATAbits.LATA0      = 1;
//    while{
//    }
    
    //assignment part 2
    TRISEbits.TRISE8    = 1; // set as input
    uint8_t t2_status;
    
//    while (1){
//        t2_status = !PORTEbits.RE8;
//        if (t2_status){
//            LATAbits.LATA0 = 1;  // turn on led 1
//            __delay_ms(500);
//        } else {
//            LATAbits.LATA0 = 0;  // turn off led 1
//        }
//    }
    
    // assignment part 3
//    while (1){
//        t2_status = !PORTEbits.RE8;
//        if (t2_status){
//             LATAbits.LATA0 ^= 1;           
//        }
//        __delay_ms(1000);
//    }
    
    return 0;
}
