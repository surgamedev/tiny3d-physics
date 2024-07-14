#include "actor.h"

// function implemenations

Actor actor_create(uint32_t id, const char *model_path)
{
    Actor actor = {

        .id = id,
		.model = t3d_model_load(model_path),
        .modelMat = malloc_uncached(sizeof(T3DMat4FP)), // needed for t3d

        .scale = {1.0f, 1.0f, 1.0f},
        
		.body = {
            .position = {0.0f, 0.0f, 0.0f},
            .velocity = {0.0f, 0.0f, 0.0f},
            .rotation = {0.0f, 0.0f, 0.0f},
        },
        
		.grounding_height = 0.0f,
        
		.settings = {
            .idle_acceleration_rate = 9.0f,
            .walk_acceleration_rate = 4.0f,
            .run_acceleration_rate = 6.0f,
            .jump_acceleration_rate = 50.0f,
            .aerial_control_rate = 0.5,
            .walk_target_speed = 750.0f,
            .run_target_speed = 1400.0f,
            .sprint_target_speed = 2200.0f,
            .jump_target_speed = 850.0f,
            .jump_timer_max = 0.2f,
        },
    };

    rspq_block_begin();
    t3d_model_draw(actor.model);
    actor.dl = rspq_block_end();

    t3d_mat4fp_identity(actor.modelMat);

    return actor;
}

void actor_set(Actor *actor)
{	
	t3d_mat4fp_from_srt_euler(actor->modelMat,
		(float[3]){actor->scale.x, actor->scale.y, actor->scale.z},
		(float[3]){rad(actor->body.rotation.x), rad(actor->body.rotation.y), rad(actor->body.rotation.z)},
		(float[3]){actor->body.position.x, actor->body.position.y, actor->body.position.z}
	);
}

void actor_draw(Actor *actor) 
{	
	t3d_matrix_set(actor->modelMat, true);
	rspq_block_run(actor->dl);
}

void actor_delete(Actor *actor) 
{
	free_uncached(actor->modelMat);
}