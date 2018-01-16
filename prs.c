#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,m;
	scanf("%d%d",&n,&m);
	int x=2,cnt=1;
	int isPrime;
	int s1=0,s2=0,s=0;
	while(cnt<=m){
		isPrime=1;
		for (int i = 2; i < x; ++i)
		{
			isPrime=1;
			if(x%i==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			s1+=x;
			if(cnt<n)
				s2+=x;
			cnt++;
		}
		x++;
	}
	s=s1-s2;
	printf("%d\n",s);

	return 0;
}