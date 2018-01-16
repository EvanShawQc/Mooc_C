#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x,t;
	int mask=1;
	scanf("%d",&x);
	t=x;
	while(t>9){
		mask*=10;
		t/=10;
	}
	do{
		int d=x/mask;
		x%=mask;
		printf("%d",d);
		if(mask>9)
			printf(" ");
		mask/=10;
	}while(mask>0);
	printf("\n");
	return 0;
}