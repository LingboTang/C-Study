#include <iostream>

class A
{
	public:
		int x;
		void foo() {x++; y--;}

	private:
		int y;
		void bar() {x--; y++;}
};

int main()
{
	A a;
	a.x = 0; // OK, public data
	a.foo(); // OK, public method
	//a.y = 0; Not OK
	//A.bar(); Not OK 
}
