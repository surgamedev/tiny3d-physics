#ifndef ACTOR_H
#define ACTOR_H

#include <t3d/t3dmodel.h>
#include <stdint.h>
#include <stdbool.h>
#include <t3d/t3dmath.h>

#include "../physics/math/vector3.h"
#include "../physics/body/rigid_body.h"

// structures

typedef enum {

	EMPTY,
    STAND_IDLE,
    WALKING,
    RUNNING,
	SPRINTING,
	ROLL,
	JUMP,
	FALLING,

} ActorState;


typedef struct {

	float idle_acceleration_rate;
	float walk_acceleration_rate;
	float run_acceleration_rate;
	float roll_acceleration_rate;
	float roll_acceleration_grip_rate;
	float jump_acceleration_rate;
	float aerial_control_rate;

	float walk_target_speed;
	float run_target_speed;
	float sprint_target_speed;
	float idle_to_roll_target_speed;
	float idle_to_roll_grip_target_speed;
	float walk_to_roll_target_speed;
	float run_to_roll_target_speed;
	float sprint_to_roll_target_speed;
	float jump_target_speed;
	
	float jump_timer_max;

}ActorSettings;


typedef struct {

	float stick_magnitude;
	float stick_x;
	float stick_y;
	float jump_time_held;
	bool jump_hold;
	bool jump_released;

}Actorinput;


typedef struct {

	uint32_t id;
	rspq_block_t *dl;
	T3DMat4FP *modelMat;
	T3DModel *model;
	
	Vector3 scale;
	RigidBody body;
	float target_yaw;
	Vector3 target_velocity;
	float horizontal_speed;
	bool grounded;
	float grounding_height;

	ActorState previous_state;
	ActorState state;

	ActorSettings settings;
	Actorinput input;

} Actor;


// function prototypes

Actor actor_create(uint32_t id, const char *model_path);
void actor_set(Actor *actor);
void actor_draw(Actor *actor);
void actor_delete(Actor *actor);


#endif