#ifndef TIME_H
#define TIME_H

#include <libdragon.h>

// structures

typedef struct
{

    float current_frame_s;
    float current_frame_ms;
    float last_frame_ms;
    float frame_time_s;
    float frame_rate;

} TimeData;


// functions prototypes

void time_init(TimeData *time);
void time_setData(TimeData *time);

#endif