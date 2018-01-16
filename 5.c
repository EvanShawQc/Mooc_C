#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;
	int cnt;

	while (scanf("%d/%d", &a, &b) != EOF){
		cnt = 0;

		if (a < 10 || b >= 100 || a >= b){
			printf("Invalid input!\n\n");
			continue;
		}
		
		printf("\n0.");
		while (a % b != 0 && cnt < 200){
			printf("%d", a*10/b);
			a = a*10%b;
			cnt++;
		}
		printf("\n\n");
	}

	return 0;
}