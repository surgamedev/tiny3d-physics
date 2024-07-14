#ifndef CAMERA_CONTROLS_H
#define CAMERA_CONTROLS_H

#include "camera.h"
#include "camera_states.h"
#include "../control/controls.h"

/* CAMERA_CONTROLS.H
here are all the camera control related functions */


int input(int input);

void orbit_withStick(Camera *camera, ControllerData *data);
void orbit_withCButtons(Camera *camera, ControllerData *data);
void aim(Camera *camera, ControllerData *data);

void cameraControl_setOrbitalMovement(Camera *camera, ControllerData *data_0);

#endif