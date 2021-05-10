#include <iostream>
#include <string>
using namespace std;

class Weapon
{
public:
	Weapon()
	{
		cout << "New weapon created" << endl;
	}
	~Weapon()
	{
		cout << "Weapon destroyed" << endl;
	}
};

class Character
{
public:
	Character()
	{
		cout << "New character created." << endl;
		CharacterAge = new int(26);
		CharacterHealth = new float(100.f);
	}
	~Character()
	{
		cout << "Character deleted." << endl;
		// delete dynamic properties of the class
		delete CharacterAge;
		delete CharacterHealth;
	}

	int* CharacterAge;
	float* CharacterHealth;
};

int main()
{
	Weapon* wep = new Weapon;
	delete wep;

	wep = nullptr;

	Character* character = new Character;
	delete character;
	character = nullptr;

	system("pause");
}