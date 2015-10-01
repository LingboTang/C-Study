#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

static int little_endian_machine = 0;
static int big_endian_machine = 1;

void write_bite(int *x);


int main()
{
	int x;
	
	char *p = reinterpret_cast<char*>(&x);

	if (little_endian_machine)
	{
		for (int i=0; i<sizeof(x); ++i)
		{
			write_byte(p[i]);
		}
	}
	else
	{
		for (int i=0; i<sizeof(x)-1; --i)
		{
			write_byte(p[i]);
		}
	}
	return 0;
}


