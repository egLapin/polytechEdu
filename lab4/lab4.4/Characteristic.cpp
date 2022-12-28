#include "Characteristic.h"

Characteristic::Characteristic(float nstronge)
{
	strong = nstronge;
}

float Characteristic::GetDamage(WeaponC weapon)
{
	return weapon.getDamage() + strong;
}
