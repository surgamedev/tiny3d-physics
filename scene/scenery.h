#ifndef SCENERY_H
#define SCENERY_H

#include <stdint.h>
#include <stdbool.h>
#include <t3d/t3dmath.h>
#include <t3d/t3dmodel.h>

#include "../physics/math/vector3.h"

// structures

typedef struct {

  	uint32_t id;
	rspq_block_t *dl;
	T3DMat4FP *modelMat;
	T3DModel *model;
    
	Vector3 scale;
	Vector3 position;
	Vector3 rotation;

} Scenery;


// function prototypes

Scenery scenery_create(uint32_t id, const char *model_path);
void scenery_set(Scenery *scenery);
void scenery_draw(Scenery *scenery);
void scenery_delete(Scenery *scenery);

#endif
