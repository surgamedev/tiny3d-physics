#ifndef SCREEN_H
#define SCREEN_H

#include <t3d/t3d.h>

typedef struct {
	
	surface_t depthBuffer; 
	T3DViewport viewport;

} Screen;


void screen_init(Screen* screen);
void screen_clear(Screen* screen);

#endif