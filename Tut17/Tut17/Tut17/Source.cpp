#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
	virtual void Speak()
	{
		cout << "Hello." << endl;
	}
};
class Child : public Parent
{
	virtual void Speak()
	{
		cout << "Hi." << endl;
	}
};
class Grandchild : public Child
{
	virtual void Speak()
	{
		cout << "Sup." << endl;
	}
};

class Runner
{
public:
	virtual void Run()
	{
		cout << "I\'m fast boi" << endl;
	}
};

class ParentRunner : public Parent, public Runner
{
};

int main()
{
	Parent* ptr;
	ptr = new Child;
	ptr->Speak(); // pointer of Parent type, but calls Child's Speak
	Parent* ptrTwo = new Grandchild;
	ptrTwo->Speak(); // pointer of Parent type, but calls Grandchild's Speak

	ParentRunner pr;
	pr.Speak();
	pr.Run();

	system("pause");
}