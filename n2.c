#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,fac=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		fac*=i;
	}
	printf("%d!=%d\n",n,fac );
	return 0;
}