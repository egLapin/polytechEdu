// lab4-project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std; 
class Weapon1
{
public:
	Weapon1(string name, float damage, float wieght);
	Weapon1() : Weapon1("default", 1, 1.5) {};
	~Weapon1();
	string name;
	float damage;
	float wieght;

private:

};

Weapon1::Weapon1(string nname, float ndamage, float nwieght)
{
	name = nname;
	damage = ndamage;
	wieght = nwieght;
}

Weapon1::~Weapon1(){}


int main1()
{
	Weapon1 version1;
	Weapon1 version2("GUN", 4, 3.4);
	cout << "First weapon default constructor: " << version1.name << " " << version1.damage << " " << version1.wieght << " " << endl;
	cout << "Second weapon custom constructor: " << version2.name << " " << version2.damage << " " << version2.wieght << " " << endl;
	return 0;
}

