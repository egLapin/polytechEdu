#pragma once
#include<string>
class WeaponC
{
public:
	WeaponC();
	WeaponC(std::string nname, float ndamage, float nwieght);
	~WeaponC();
	bool CanBePicked(float maxWieght);
	float sumWieght(WeaponC secondary);
	float sumWieght(float nwieght);

	std::string getName();
	float getWieght();
	void setDamage(float ndamage);
	float getDamage();


private:
	std::string name;
	float damage;
	float wieght;
};



