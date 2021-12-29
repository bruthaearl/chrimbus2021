#import "tracks.h"

#ifndef PLAY_TRACK_H
#define	PLAY_TRACK_H



void play_track(uint8_t track[], uint8_t length);

void next_track(void);

uint8_t bail_signal = 0;
uint8_t current_track = 0;
uint8_t paused = 1;


#endif	/* PLAY_TRACK_H */

