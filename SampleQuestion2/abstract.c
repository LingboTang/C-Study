#include <stdio.h>
#include <stdlib.h>


//C-structs are types consisting of a collection of data items

struct Point
{
	int x,y;
};

struct Poing p; //define point variable p
p.x=p.y=0; //initialize its data members

//In C, global functions act on structs; usually a pointer to
// a struct object is passed as first argument.

//C Abstract Data Type = Struct & Global Functions

//Eg.

void Point_init (struct Point *p)
{
	p.x = p.y = 0;
}

// write it to file
//bool Point_write (struct Point *p, FILE *fp);


// read it from file
//bool Point_read (struct Point *p, FILE *fp);

// free resources (memory,files,locks,...)
//void Point_cleanup(struct Point *p)

// C function naming convention: struct name _operation

//Error-prone!

// What if we forget to call struct_init or struct_cleanup?
// Data will not be initialized properly or our program may leak resources,
// such as memory and file descriptors, eventually resulting in program termination.


