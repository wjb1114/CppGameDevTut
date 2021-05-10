#include <iostream>
#include <string>
using namespace std;

struct Character
{
	Character()
	{
		Name = "Default Name";
		Health = 100.f;
	}

	void PrintHealth()
	{
		cout << Name << " has " << Health << " health remaining." << endl;
	}

	string Name;
	float Health;
};

int main()
{
	Character* newChar = new Character();	// Creating new Character object on the Heap, not the Stack
											// Creating at runtime, NOT at compile time

	newChar->PrintHealth();

	newChar->Health = 150.f;
	newChar->Name = "Alduin";

	newChar->PrintHealth();

	delete newChar;         // free memory for future allocation
	newChar = nullptr;      // set the pointer to a null value to prevent potential garbage data being accessed

	system("pause");
}