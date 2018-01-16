#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,fac=1,i=1;
	scanf("%d",&n);
	while(i<=n){
		fac*=i;
		i++;
	}
	printf("%d!=%d\n",n,fac );
	return 0;
}