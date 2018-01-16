#include <stdio.h>

int main()
{
	int amount=100;
	float price=0;

	printf("请输入金额（元）：");
	scanf("%f",&price);

	printf("请输入票面（元）：");
	scanf("%d",&amount);

	float change=amount-price;
	printf("找您%.2f元。\n",change);

	return 0;
}