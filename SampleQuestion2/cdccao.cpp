#include <iostream>
using namespace std;

class X
{
	public:
		X() { cout << "CONSTR" << this << endl;}
		X(const X &rhs) {cout << "Copy " << this <<endl;}
		X & operator = (const X & rhs) {
			cout << "Assign" << this << endl;
			return *this;
		}
		~X() {cout << "Destr" << this << endl;}
};

void g(X x) {cout << "g" << endl;}

int main()
{
	X u;
	
	X v(u);

	X w = v;
	
	v = u;

	g(v);
}
