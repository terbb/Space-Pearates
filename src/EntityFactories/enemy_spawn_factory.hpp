#ifndef ENEMY_SPAWN_FACTORY_H
#define ENEMY_SPAWN_FACTORY_H

#include "entity.hpp"
#include "program.hpp"
#include "Components/sprite_component.hpp"
#include "Components/transform_component.hpp"
#include "Components/color_component.hpp"
#include "Components/movement_component.hpp"
#include "Components/health_component.hpp"
#include "Components/enemy_component.hpp"
#include "Components/enemy_spawn_component.hpp"


class EnemySpawnFactory
{
public:
  static Entity build(float spawnRate);
};

#endif