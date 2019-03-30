#ifndef WATER_TOWER_ATTACK_COMPONENT_H
#define WATER_TOWER_ATTACK_COMPONENT_H

#include "Utility/utility.hpp"
#include "../base_component.hpp"
#include "tower_attack_component.hpp"

class WaterTowerAttackComponent : public TowerAttackComponent {
public:
  WaterTowerAttackComponent(vec2 _relativeFirePosition, vector<float> _rangePerLvl, vector<float> _slowPerLvl);

  float getSlowDownFactor();
  float slowDownFactor;
  vector<float> slowPerLvl;
  virtual void setToLevel(int level);
  virtual int getTowerType() { return towerTypeID; };

private:
  static const int towerTypeID = TowerTypeID::water_tower;
};

#endif
