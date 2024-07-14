#ifndef MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H

#include <stdbool.h>
#include <stdint.h>

#include "vector3.h"

bool areParallelVectors(const Vector3* vector1, const Vector3* vector2);
bool areOrthogonalVectors(const Vector3* vector1, const Vector3* vector2);
Vector3 clamp_vector(const Vector3* vector, float maxLength);

Vector3 closestPointOnSegmentToPoint(const Vector3* segPointA, const Vector3* segPointB, const Vector3* pointC);
void getClosestPointsBetweenTwoSegments(const Vector3* seg1PointA, const Vector3* seg1PointB, const Vector3* seg2PointA, const Vector3* seg2PointB, Vector3* closestPointSeg1, Vector3* closestPointSeg2);

void getBarycentricCoordinatesInTriangle(const Vector3* a, const Vector3* b, const Vector3* c,  const Vector3* p, float* u, float* v, float* w);

float intersectionPlaneAndSegment(const Vector3* segA, const Vector3* segB, float planeD, const Vector3* planeNormal);
float distancePointToLine(const Vector3* linePointA, const Vector3* linePointB, const Vector3* point);
Vector3 projectionPointOnPlane(const Vector3* point, const Vector3* unitPlaneNormal, const Vector3* planePoint);
float distancePointToPlane(const Vector3* point, const Vector3* planeNormal, const Vector3* planePoint);
bool isPowerOfTwo(uint64_t number);
uint64_t nextPowerOfTwo64Bits(uint64_t number);
uint64_t pairNumbers(uint32_t number1, uint32_t number2);

#endif
