#ifndef ACTOR_CONTROLS_H
#define ACTOR_CONTROLS_H

#include "actor.h"
#include "actor_states.h"
#include "../control/controls.h"
#include "../physics/math/vector2.h"

// function prototypes

void jump(Actor* actor, ControllerData *data, float frame_time);
void roll(Actor* actor, ControllerData *data);
void move_with_stick(Actor* actor, ControllerData *data, float camera_angle_around);
void actorControl_setMotion(Actor* actor, ControllerData *data, float frame_time, float camera_angle_around);


#endif