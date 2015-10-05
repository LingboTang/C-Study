#include <iostream>

template <type T> class Vector
{
public:
	Vector(int size=0);
	~Vector();
	...
	
	T &operator[](int i)
	{
		check(i);
		return p[i];
	}

	const T &operator[](int i) const
	{
		check(i);
		return p[i];
	}

private:
	void check(int i) const {assert(0<=i && i<size);}
	T *p;
	int size;
};

int main()
{
	Vector<int> vi(10);
	Vector<const char*> vs(20);
	vi[0] = 10;
	vs[1] = "text";
	return 0;
}
