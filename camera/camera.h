#ifndef CAMERA_H
#define CAMERA_H

#include <t3d/t3dmath.h>

#include "light.h"
#include "../physics/math/vector2.h"
#include "../physics/math/vector3.h"
#include "../config/screen.h"

// structures

typedef enum {
    ORBITAL,
	AIMING,

} CameraState;

typedef struct {

	float orbitational_acceleration_rate;
	Vector2 orbitational_max_velocity;

	float zoom_acceleration_rate;
	float zoom_deceleration_rate;
	float zoom_max_speed;

	float target_zoom;
	float target_zoom_aim;

	float offset_acceleration_rate;
	float offset_deceleration_rate;
	float offset_max_speed;

	float target_offset;
	float target_offset_aim;
	
	float max_pitch;

} CameraSettings;


typedef struct {

	T3DViewport viewport;

	Vector3 position;
	float offset_height;
	
	float distance_from_barycenter; // the barycenter is choosen and it's the center of the orbitational movement
	float angle_around_barycenter;
	float pitch;

	float horizontal_barycenter_distance;
	float vertical_barycenter_distance;

	Vector3 target; // target as in the place at which the camera must aim
	float target_distance; 
	float horizontal_target_distance;
	float vertical_target_distance;

	Vector2 orbitational_acceleration;
	Vector2 orbitational_velocity;
	Vector2 orbitational_target_velocity; // target as in intended velocity

	float offset_angle;

	float offset_acceleration;
	float offset_speed;
	int offset_direction;

	float zoom_acceleration;
	float zoom_speed;
	int zoom_direction;

	CameraSettings settings;
	
} Camera;


// functions prototypes


Camera camera_create();
void camera_getOrbitalPosition(Camera *camera, Vector3 barycenter, float frame_time);
void camera_set(Camera *camera, Screen* screen);


#endif
