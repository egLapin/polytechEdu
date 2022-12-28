#include <iostream>
#include "WeaponC.h"
#include "Characteristic.h"
#include "MyMath.h"

using namespace std;
int main()
{
	MyMath NewMath;
	Characteristic Buster(3);
	WeaponC version2("gunner", 4, 3.4);
	cout << "Second weapon custom constructor: " << version2.getName() << " " << version2.getDamage() << " " << version2.getWieght() << " " << endl;
	cout << "Damage with Buster: " <<  Buster.GetDamage(version2) << endl;

	NewMath.Div();
	NewMath.Mult();

	cout << "Count of math iter: "<< NewMath.counter << endl;
	return 0;
}