#include "mcc_generated_files/mcc.h"
#include "play_track.h"
#include "tracks.h"

void main(void) {
    // initialize the device

    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    next_track();
    // play_track(track_we_wish, length);
    while (1) {
        while (paused) {
            // do nothing
        }
        paused = 1;
        next_track();

    }
}

void next_track(void) {
    static uint8_t state = 0;
    ++state;
    // roll back
    if (state == 7) {
        state = 1;
    }
    switch (state) {
        case 1:
            PWM3CONbits.EN = 0;
            break;
        case 2:
            play_track(track_we_wish, track_we_wish_length);
            break;
        case 3:
            play_track(track_last_christmas, track_last_christmas_length);
            break;
        case 4:
            play_track(track_deck_the_halls, track_deck_the_halls_length);
            break;
        case 5:
            play_track(track_do_they, track_do_they_length);
            break;
        case 6:
            play_track(track_silent_night, track_silent_night_length);
            break;
        default:
            PWM3CONbits.EN = 0;
            break;
    }
}