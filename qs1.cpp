#include<stdio.h>
int fact(int n)
{
	int prod=1;
	while(n!=1)
	{
		prod*=n;
		n--;
	}
	return prod;
}
int main()
{
	int i,j,n,f,rem=0,sum=0;
	printf("Enter supremum of range:");
	scanf("%d",&n);
	printf("\nThe given range is 1-%d",n);
	for(j=1;j<n;j++)
	{
		int ori=j;
		while(ori!=0)
		{
			rem+=(ori%10);
			f=fact(rem);
			sum+=f;
			ori/=10;
			rem=0;
		}
		if(sum==j)
			printf("\n%d is a special number",j);
		sum=0;
	}
	return 0;
}
