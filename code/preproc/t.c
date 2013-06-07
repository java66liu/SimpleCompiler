#include <stdlib.h>
#include <stdio.h>

#define _AS123
#define _as123
#define As90

enum A {
	a, b, c
};

enum B {
	a, b, d
};

int main () { 

	char *c = "#define A";
	
	int i = 0, *a = malloc (4 * 100 * 1000000);
	
	int As902 = 100;
	int define = 1000;
	
	printf ("a : %d\n", sizeof (a));
	
	while (i < 100 * 1000000)
		a[i] = i++;
}









/*
#include <stdio.h>

#define A 2
#define MIN(x, y)	(x) < (y)

struct B {
	int b;
	int c;
};

void print (char *c) {
	printf (c);
}

int main () {
	int i = 1;
	
	if (MIN (i, A)) {
		int i = 2;
		
		print ("hello, world");
	}
}

*/







