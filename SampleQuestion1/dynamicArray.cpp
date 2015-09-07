#include <iostream>

using namespace std;

const int N = 100; //C++ way of declaring constants

int main() 
{

	double *p = new double[N]; // allocate N consecutive

				 // double type numbers

	for (int i =0; i < N; ++i)
	{
		p[i] = 1.0;		
	}

	cout << p[54];
	cout << "\n";
	cout << "success";

	delete[] p;

	return 0;
}
