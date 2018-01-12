#include "../include/Scene.h"

Scene::Scene() = default;

Scene::~Scene()
{
	for (auto entity : entities) delete entity;
	for (auto light : lights) delete light;
}

void Scene::InitEntities()
{
	Entity* cube = new Entity();
	cube->SetMesh(*Mesh::CreateCube());
	cube->SetColor(255, 0, 0);

	entities.push_back(cube);
}

void Scene::InitLights()
{
	lights.push_back(new Light(0, 0, 0));
}
