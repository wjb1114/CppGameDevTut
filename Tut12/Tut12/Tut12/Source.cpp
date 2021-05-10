#include <iostream>
#include <string>
using namespace std;

// public - accessible anywhere
// protected - accessible only from inside the class or a derived class
// private - accessible from only inside the class

class Dog
{
public:
	void Bark()
	{
		cout << "Dog noises." << endl;
	}
};

class Mutt : public Dog // Bark is still public - defined as public in base, so public keyword keeps it at the same access level
{

};

class Shepherd : protected Dog // Bark is now protected - defined as public in base, so protected keyword changes it to the new access level
{

};

class Corgi : private Dog // Bark is now private - defined as public in base, so private keyword changes it to the new access level
{

};

int main()
{
	Mutt mutt;
	Shepherd shepherd;
	Corgi corgi;

	mutt.Bark();  // allowed, as it is public
	// shepherd.Bark(); -- not allowed, as the function is protected
	// corgi.Bark(); -- not allowed, as the function is private

	system("pause");
}