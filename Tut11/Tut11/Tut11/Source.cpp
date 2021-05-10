#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	string Type;
	int Eyes;
};

class Spider : public Creature
{
public:
	float PoisonDamage;
	Spider()
	{
		PoisonDamage = 100.f;
		Eyes = 8;
		Type = "Arachnid";
	}

	Spider(float damage, int eyes)
	{
		PoisonDamage = damage;
		Eyes = eyes;
		Type = "Arachnid";
	}
};

class Goblin : public Creature
{
public:
	Goblin()
	{
		Eyes = 2;
		Type = "Humanoid";
	}

	Goblin(int eyes)
	{
		Eyes = eyes;
		Type = "Humanoid";
	}
};

int main()
{
	Goblin goblin;

	cout << goblin.Type << endl;
	cout << goblin.Eyes << endl;

	Spider spider;

	cout << spider.Type << endl;
	cout << spider.Eyes << endl;
	cout << spider.PoisonDamage << endl;

	Goblin goblinTwo(1);
	Spider spiderTwo(12.5f, 7);

	cout << goblinTwo.Type << endl;
	cout << goblinTwo.Eyes << endl;

	cout << spiderTwo.Type << endl;
	cout << spiderTwo.Eyes << endl;
	cout << spiderTwo.PoisonDamage << endl;

	system("pause");
}