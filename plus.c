#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a=0;
	int b=0;

	printf("请输入两个整数：\n");
	scanf("%d %d",&a,&b);
	printf("%d+%d=%d\n",a,b,a+b);

	return 0;
}