#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x;
	int cnt=0;
	x=2;
	while(cnt<30){
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
			printf("%d\t",x);
			if (cnt%5==0)
			{
				printf("\n");
			}
		}
		x++;
	}
	return 0;
}