#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x,cnt=0;
	for (x=1; x<=100; x++){
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
			cnt++;
			printf("%d ", x);
		
			if (cnt%5==0)
			{
				printf("\n");
			}
		}
	}

	printf("\n");
	return 0;
}