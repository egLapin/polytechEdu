#include "WeaponC.h"
#include <iostream>
#include <string>
using namespace std;

WeaponC::WeaponC(string nname, float ndamage, float nwieght)
{
	name = nname;
	damage = ndamage;
	wieght = nwieght;
}

WeaponC::WeaponC() : WeaponC("default", 1, 1.5)
{
}

WeaponC::~WeaponC()
{
	cout << "Weapon with params - deleted:  " << name << " " << damage << " " << wieght << " " << endl;
}

bool WeaponC::CanBePicked(float maxWieght) {
	if (wieght < maxWieght) return true;
	else return false;
}

float WeaponC::sumWieght(WeaponC secondary) {
	return secondary.wieght + wieght;
}

float WeaponC::sumWieght(float nwieght) {
	return nwieght + wieght;
}

std::string WeaponC::getName()
{
	return name;
}

float WeaponC::getWieght()
{
	return wieght;
}

void WeaponC::setDamage(float ndamage)
{
	damage = ndamage;
}

float WeaponC::getDamage()
{
	return damage;
}


