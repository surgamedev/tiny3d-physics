#include "actor_collide.h"

void actor_collideWithPlayground(Actor *actor)
{
    if (actor->body.position.x >  1870) actor->body.position.x =  1870;
    if (actor->body.position.x < -1870) actor->body.position.x = -1870;
    if (actor->body.position.y >  1870) actor->body.position.y =  1870;
    if (actor->body.position.y < -1870) actor->body.position.y = -1870;
}