#include <iostream>
#include <string>
using namespace std;

class Item
{
public:
	Item()
	{
		cout << "Item created" << endl;
	}
	~Item()
	{
		cout << "Item destroyed" << endl;
	}
};

class Critter
{
public:
	Critter()
	{
		cout << "Critter created" << endl;
		++CritterCount;
	}
	~Critter()
	{
		cout << "Critter destroyed" << endl;
		--CritterCount;
		AnnounceCount();
	}
	static int CritterCount;

	static void AnnounceCount()
	{
		cout << CritterCount << " Critters." << endl;
	}
};

int Critter::CritterCount = 0;

void AddToCount()
{
	static int count = 0; // state preserved across calls
	count++;
	cout << count << endl;
}

int main()
{
	AddToCount(); // display 1
	AddToCount(); // display 2
	AddToCount(); // display 3

	{
		static Item item; // destructor not called until main() exits
	}

	{
		Item anotherItem; // destructor called when this scope ends
	}

	Critter::AnnounceCount();
	Critter crit;
	Critter::AnnounceCount();
	Critter critTwo;
	Critter::AnnounceCount();

	system("pause");
}