#include <iostream>
#include <string>

using namespace std;
class Weapon
{
public:
	Weapon(string name, float damage, float wieght);
	Weapon() : Weapon("default", 1, 1.5) {};
	~Weapon();
	string name;
	float damage;
	float wieght;

	bool CanBePicked(float maxWieght) {
		if (wieght < maxWieght) return true;
		else return false;
	}

	float sumWieght(Weapon secondary) {
		return secondary.wieght + wieght;
	}

	float sumWieght(float nwieght) {
		return nwieght + wieght;
	}

private:

};

Weapon::Weapon(string nname, float ndamage, float nwieght)
{
	name = nname;
	damage = ndamage;
	wieght = nwieght;
}

Weapon::~Weapon() {
	cout << "Weapon with params - deleted:  " << name << " " << damage << " " << wieght << " " << endl;
}


int main2()
{
	Weapon version2("GUN", 4, 3.4);
	cout << "Second weapon custom constructor: " << version2.name << " " << version2.damage << " " << version2.wieght << " " << endl;
	Weapon* version1 = new Weapon;
	cout << "First weapon default constructor: " << version1->name << " " << version1->damage << " " << version1->wieght << " " << endl << endl;

	cout << "Can be picked: " << version2.CanBePicked(5) << endl << endl;

	cout << "Sum of weapon by class:" << version2.sumWieght(*version1) << endl;
	cout << "Sum of weapon by wieght value:" << version2.sumWieght(version1->wieght) << endl;

	delete version1;
	return 0;
}
