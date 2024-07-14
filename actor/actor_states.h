#ifndef ACTORSTATES_H
#define ACTORSTATES_H


#include "actor_movement.h"

#define ACTOR_GRAVITY -6000


// function prototypes


void set_idle (Actor *actor);

void set_walking (Actor *actor);
            
void set_running (Actor *actor);
            
void set_sprinting (Actor *actor);

void set_jump (Actor *actor);

void set_falling (Actor *actor);


void actor_setState (Actor *actor, ActorState state);

#endif