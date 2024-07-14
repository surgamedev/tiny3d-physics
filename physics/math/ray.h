/**
 * @file
 *
 * Holds a ray.
 * This structure represents a 3D ray represented by two points.
 * The ray goes from point1 to point1 + maxFraction * (point2 - point1).
 * The points are specified in world-space coordinates.
 */

#ifndef RAY_H
#define RAY_H

#include "vector3.h"

// Ray structure
typedef struct {

    Vector3 point1;       /* First point of the ray (origin) in world-space */
    Vector3 point2;       /* Second point of the ray in world-space */
    float maxFraction;    /* Maximum fraction value */

} Ray;

#endif
