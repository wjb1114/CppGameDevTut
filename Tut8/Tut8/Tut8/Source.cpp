#include <iostream>
#include <string>
using namespace std;

struct LocationVector
{
	float X;
	float Y;
	float Z;
};

struct Character
{
	string Name;
	float Health;
	int Level;
	float Damage;

	LocationVector Location = { 0.f, 0.f, 0.f };

	void Attack()
	{
		cout << Name << " does " << Damage << " damage!" << endl;
	}

	void Displaylocation()
	{
		cout << "X: " << Location.X << endl;
		cout << "Y: " << Location.Y << endl;
		cout << "Z: " << Location.X << endl;
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
	falmir.Displaylocation();

	Character brenwyn = {
		"Brenwyn",
		100.f,
		3,
		15.f,
		{35.5f, 67.45f, 100.003f}
	};

	brenwyn.Attack();
	brenwyn.Displaylocation();

	system("pause");
}