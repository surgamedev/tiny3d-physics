#include "ray.h"

/* Initializes the ray with given points and an optional max fraction value. */
void ray_set(Ray* ray, Vector3* p1, Vector3* p2, float maxFraction)
{
    // TODO: Implement vector3_copy
    // vector3_copy(&ray->point1, p1);
    // vector3_copy(&ray->point2, p2);
    ray->maxFraction = maxFraction;
}


/* Initializes the ray with given points and a default max fraction value of 1.0. */
void ray_setDefault(Ray* ray, Vector3* p1, Vector3* p2)
{
    ray_set(ray, p1, p2, 1.0f);
}