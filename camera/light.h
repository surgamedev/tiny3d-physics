#ifndef LIGHT_H
#define LIGHT_H

#include <t3d/t3d.h>

typedef struct{

	uint8_t ambient_color[4];
	uint8_t directional_color[4];
	T3DVec3 direction;
	
} LightData;


void light_set(LightData *light);
LightData light_create();

#endif