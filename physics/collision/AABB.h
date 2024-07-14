/**
 * @file
 *
 * Holds an Axis Aligned Bounding Box (AABB).
 */

#ifndef AABB_H
#define AABB_H

#include "../math/vector3.h"
#include "../math/ray.h"

typedef struct AABB {

    Vector3 minCoordinates;
    Vector3 maxCoordinates;

} AABB;


/* Function prototypes for AABB */

void aabb_init(AABB *aabb);
void aabb_setMin(AABB *aabb, const Vector3 *min);
void aabb_setMax(AABB *aabb, const Vector3 *max);

Vector3 aabb_getCenter(const AABB *aabb);
Vector3 aabb_returnMin(const AABB *aabb);
Vector3 aabb_returnMax(const AABB *aabb);
Vector3 aabb_getExtent(const AABB *aabb);

float aabb_getVolume(const AABB *aabb);

void aabb_scale(AABB *aabb, const Vector3 *scale);

void aabb_inflate(AABB *aabb, float dx, float dy, float dz);
void aabb_inflateWithPoint(AABB *aabb, const Vector3 *point);

void aabb_mergeWithAABB(AABB *aabb, const AABB *other);
AABB aabb_returnMerge(const AABB *aabb1, const AABB *aabb2);

void aabb_createAABBForTriangle(const Vector3 *trianglePoints, AABB *aabb);

bool aabb_containsAABB(const AABB *aabb1, const AABB *aabb2);
bool aabb_containsPoint(const AABB *aabb, const Vector3 *point);

bool aabb_collisionAABB(const AABB *aabb1, const AABB *aabb2);

bool aabb_collisionTriangle(const AABB *aabb, const Vector3 *trianglePoints);

bool aabb_rayIntersect(const AABB *aabb, const Vector3 *rayOrigin, const Vector3 *rayDirectionInverse, float rayMaxFraction);
bool aabb_raycast(const AABB *aabb, const Ray *ray, Vector3 *hitPoint);

#endif
