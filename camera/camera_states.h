#ifndef CAMERA_STATES_H
#define CAMERA_STATES_H

#include "camera.h"

/* CAMERA_STATES_H
here are all the camera state machine related functions */


// function prototypes

void set_orbital(Camera *camera);

void set_aiming(Camera *camera);

void camera_setState(Camera *camera, CameraState new_state);

#endif
