#include <stdio.h>
int main(int argc, char const *argv[])
{
	double sum=0.0,sign=1.0;
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		sum+=sign*1.0/i;
		sign=-sign;
	}
	printf("%lf\n",sum);
	return 0;
}