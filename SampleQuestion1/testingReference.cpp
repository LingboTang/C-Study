#include <iostream>

using namespace std;

// & prefix indicates reference
int main() {

	int A[] = {1,2,3,4};
	int &x = A[2]; // x is a reference (or alias) of A[2]
	++x;	       // operations on x now effect A[2] (now 4)
	cout << x;
	cout << A[2];
	return 0;
}
