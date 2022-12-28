#pragma once
#include "WeaponC.h"
class Characteristic
{
	friend class WeaponC;
public: 
	float strong;
	Characteristic(float nstrong);
	float GetDamage(WeaponC weapon);
};

