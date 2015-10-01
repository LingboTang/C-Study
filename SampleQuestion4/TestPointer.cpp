#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	int a, *p, *q;
	
	a = 0;

	cout << a << endl;

	cout << *p << endl;

	cout << *q << endl;

	a = *p++ - *--q;
	
	cout << a << endl;
}
