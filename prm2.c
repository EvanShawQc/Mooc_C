#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x;
	for (x=2; x<=100; x++){
		int isPrime=1;
		for (int i = 2; i < x; ++i)
		{
			if(x%i==0){
				isPrime=0;
				break;
			}
		}
		if (isPrime==1)
		{
			printf("%d ", x);
		}
	}

	printf("\n");
	return 0;
}