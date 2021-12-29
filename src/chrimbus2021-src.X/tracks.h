#ifndef TRACKS_H
#define	TRACKS_H

// note defines
#define C4 118
#define D4 105
#define E4 94
#define F4 88
#define G4 79
#define A4 70
#define b4 66
#define B4 62
#define C5 59
#define c5 56
#define D5 52
#define E5 46
#define F5 44
#define G5 39
#define A5 35
#define B5 31
#define C6 28
#define S4 1


// track defines    

//
uint8_t track_we_wish[] = {
//  1   &   2   &   3   &   2   &   2   &   3   & 
    C4, S4,                                         // we
    F4, S4, F4, G4, F4, E4, D4, S4, D4, S4, D4, S4, // wish you a merry christmas we
    G4, S4, G4, A4, G4, F4, E4, S4, C4, S4, C4, S4, // wish you a merry christmas we
    A4, S4, A4, b4, A4, G4, F4, S4, D4, S4, C4, C4, // wish you a merry christmas and a 
    D4, S4, G4, S4, E4, S4, F4, S4, S4, S4          // happy new year
};

uint8_t track_we_wish_length = 48;

uint8_t track_silent_night[] = {
//  1   &   2   &   3   &   2   &   2   &   3   &  
    G4, G4, G4, A4, G4, S4, E4, E4, E4, E4, E4, S4, // silent night
    G4, G4, G4, A4, G4, S4, E4, E4, E4, E4, E4, S4, // holy night
    D5, D5, D5, S4, D5, S4, B4, B4, B4, B4, B4, S4, // all is calm 
    C5, C5, C5, S4, C5, S4, G4, G4, G4, G4, G4, S4, // all is bright
    A4, A4, A4, S4, A4, S4, C5, C5, C5, B4, A4, S4, // round yon virgin
    G4, G4, G4, A4, G4, S4, E4, E4, E4, E4, E4, S4, // mother and child
    A4, A4, A4, S4, A4, S4, C5, C5, C5, B4, A4, S4, // holy infant
    G4, G4, G4, A4, G4, S4, E4, E4, E4, E4, E4, S4, // so tender and mild
    D5, D5, D5, S4, D5, S4, F5, F5, F5, D5, B4, S4, // sleep in heavenly
    C5, C5, C5, C5, C5, C5, E5, E5, E5, E5, E5, S4, // peace
    C5, C5, G4, G4, E4, E4, G4, G4, G4, F4, D4, S4, // sleep in heavenly
    C4, C4, C4, C4, C4, C4, C4, C4, S4, S4, S4, S4 // PEACE
};

uint8_t track_silent_night_length = 144;

uint8_t track_deck_the_halls[] = {
//  1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16
    G5, G5, G5, F5, E5, S4, D5, S4, C5, C5, D5, D5, E5, E5, C5, C5, // deck the halls...
    D5, E5, F5, D5, E5, E5, S4, D5, C5, S4, B4, S4, C5, C5, S4, S4, // fa la la
    G5, G5, G5, F5, E5, S4, D5, S4, C5, C5, D5, D5, E5, E5, C5, C5, // tis the season...
    D5, E5, F5, D5, E5, E5, S4, D5, C5, S4, B4, S4, C5, C5, S4, S4, // fa la la
    D5, D5, D5, E5, F5, S4, D5, S4, E5, E5, F5, F5, G5, G5, E5, S4, // don we now...
    E5, F5, G5, S4, A5, B4, C5, S4, B5, B5, A5, A5, G5, G5, G5, S4,  // fa la la
    G5, G5, G5, F5, E5, S4, D5, S4, C5, C5, D5, D5, E5, E5, C5, C5, // troll the ancient...
    A5, A5, A5, A5, G5, G5, S4, F5, E5, S4, D5, S4, C5, C5, C5, S4  // fa la la...    
};

uint8_t track_deck_the_halls_length = 128;


uint8_t track_last_christmas[] = {
//  1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16
    G4, G4, S4, G4, G4, F4, S4, C4, G4, G4, A4, F4, S4, S4, D4, D4,
    G4, G4, A4, S4, F4, S4, D4, S4, E4, F4, E4, D4, D4, S4, S4, S4,
    A4, A4, S4, G4, G4, G4, S4, D4, A4, b4, A4, G4, G4, G4, S4, F4,
    E4, F4, E4, E4, S4, F4, S4, E4, E4, C4, C4, C4, C4, S4, S4, S4
};

uint8_t track_last_christmas_length = 64;

uint8_t track_do_they[] = {
    G5, G5, G5, G5, C5, C5, C5, C5, A5, A5, G5, F5, G5, G5, C5, S4,
    A5, S4, G5, S4, F5, S4, E5, S4, F5, S4, E5, S4, D5, D5, D5, S4,
    G5, G5, G5, G5, C5, C5, C5, C5, A5, A5, B5, C6, G5, G5, C5, S4,
    F5, S4, E5, S4, C5, S4, G4, S4, F5, S4, E5, S4, C5, S4, D5, S4,
    C5, C5, C5, C5, C5, C5, C5, S4
};

uint8_t track_do_they_length = {
    72
};

#endif	/* TRACKS_H */

