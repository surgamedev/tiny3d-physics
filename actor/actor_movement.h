#ifndef ACTOR_MOVEMENT_H
#define ACTOR_MOVEMENT_H

#include "actor.h"
#include "../physics/math/vector2.h"

// function prototypes

void actor_setAcceleration (Actor *actor, float target_speed, float acceleration_rate);

void actor_setInertiaAcceleration (Actor *actor, float target_speed, float acceleration_rate);

void actor_setStopingAcceleration (Actor *actor);

void actor_setJumpAcceleration (Actor *actor, float target_speed, float acceleration_rate);

void actor_integrate (Actor *actor, float frame_time);

#endif