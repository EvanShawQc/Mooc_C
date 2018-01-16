#include <stdio.h>
int main(int argc, char const *argv[])
{
	for(int i=10;i>1;i/=2){
		printf("%d ",i++);
		printf("%d ",i);
	}

	printf("\n");

	int a=9;
	printf("%ld\n",sizeof(char));

	return 0;
}