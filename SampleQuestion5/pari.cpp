#include <iostream>

template <typename T> struct Pair
{
	Pair(T v1, T v2);
	T first, second;
};

// implementation can be provided outside classd template
// definition but still in header file!
// Inproves readability


template <typename T> Pair<T>::Pair(T v1, T v2) : first(v1), second(v2)
{
	...;
}

int main() 
{
	Pair<int> pi(0,0);
	Pair<float> pf(0.0,2);
	
	Pair<Pair<int>> pp(Pair<int>(0,2),Pair<int>(3,1));
	pi = pp.first;
	return 0;
}
