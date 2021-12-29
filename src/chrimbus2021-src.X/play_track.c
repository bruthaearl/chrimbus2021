#include "mcc_generated_files/mcc.h"

#include "play_track.h"
#include "tracks.h"

void play_track(uint8_t track[], uint8_t length) {
    PWM3CONbits.EN = 1;
    bail_signal = 0;
    //  uint8_t length = sizeof track / sizeof track[0];

    for (int i = 0; i < length; i++) {
        TMR2_Period8BitSet(track[i]);
        //        TMR1_StartTimer();
        //        while(PIR4bits.TMR1IF == 0) {
        //          //  if(bail_signal == 1) break;
        //        }
        //        TMR1_StopTimer();
        //        TMR1_Reload();
        //        PIR4bits.TMR1IF = 0;
        __delay_ms(200);
        if (bail_signal == 1) {
            PWM3CONbits.EN = 0;
            break;
        }
    }

    PWM3CONbits.EN = 0;

}
