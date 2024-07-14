#include "time.h"

// functions implementations

/* sets time data values to zero */
void time_init(TimeData *time)
{
    time->current_frame_s = 0.0f;
    time->current_frame_ms = 0.0f;
    time->last_frame_ms = 0.0f;
    time->frame_time_s = 0.0f;
    time->frame_rate = 0.0f;
}


/* sets timing data */
void time_setData(TimeData *time)
{
    time->current_frame_ms = get_ticks_ms();

    time->current_frame_s = time->current_frame_ms / 1000.0f;

    time->frame_time_s = (time->current_frame_ms - time->last_frame_ms) / 1000.0f;

    // TODO: Make this to not check division by zero
    if (time->frame_time_s != 0.0f) {
        time->frame_rate = 1.0f / time->frame_time_s;
    } else {
        time->frame_rate = 0.0f;
    }

    time->last_frame_ms = time->current_frame_ms;
}