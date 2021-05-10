#include <iostream>
#include <string>
using namespace std;

struct Character
{
	string Name;
	float Health;
	int Level;
	float Damage;
	void Attack()
	{
		cout << Name << " does " << Damage << " damage!" << endl;
	}
};

int main()
{
	Character falmir;
	falmir.Name = "Falmir";
	falmir.Health = 100.f;
	falmir.Level = 1;
	falmir.Damage = 2.5f;

	falmir.Attack();

	Character brenwyn = {
		"Brenwyn",
		100.f,
		3,
		15.f
	};

	brenwyn.Attack();

	system("pause");
}