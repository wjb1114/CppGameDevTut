#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:

	Dog();
	Dog(string name, int age, float health);

	string Name;
	int Age;
	float Health;

	void Bark()
	{
		cout << "Woof!" << endl;
	}
};

struct Cat
{
	Cat();

	int Age;
	int Health;

	void Meow();
};

int main()
{
	Dog Spot;

	cout << Spot.Name << endl;
	cout << Spot.Age << endl;
	cout << Spot.Health << endl;

	Dog Rex("Rex", 7, 150);

	cout << Rex.Name << endl;
	cout << Rex.Age << endl;
	cout << Rex.Health << endl;

	Cat cat;

	system("pause");
}

Dog::Dog()
{
	Bark();

	Name = "Default Name";
	Age = 10;
	Health = 100;
}

Dog::Dog(string name, int age, float health)
{
	Bark();

	Name = name;
	Age = age;
	Health = health;
}

Cat::Cat()
{
	cout << "New cat boi" << endl;

	Age = 3;
	Health = 75.f;
}

void Cat::Meow()
{
	cout << "My age is: " << Age << endl;
	cout << "My health is: " << Health << endl;
}