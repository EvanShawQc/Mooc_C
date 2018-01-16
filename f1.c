#include <stdio.h>

void sum(int a, int b)
{
	int i, s = 0;
	for (i = a; i <= b; i++){
		s += i;
	}

	printf("sum(%d, %d)=%d\n", a, b, s);
}

int main(int argc, char const *argv[])
{
	sum(10, 20);
	sum(1, 100);
	return 0;
}