#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,x,y;
	i=x=y=0;
	printf("%d %d %d\n",i,x,y);
	do{
		++i;
		if(i%2)
			x+=i;
		i++;
		y+=i++;
	}while(i<=7);
	printf("%d %d %d\n", i,x,y);
	int a=1,b=012;
	printf("%d\n",b*a++);
	return 0;
}