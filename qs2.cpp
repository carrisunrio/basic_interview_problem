#include<stdio.h>
int main()
{
	int a,b;
	// a and b are lower and upper limit of range respectively.
	printf("Enter lower limit of range: ");
	scanf("%d",&a);
	printf("\nEnter upper limit of range: ");
	scanf("%d",&b);
	for(int i=a;i<=b;i++)
	{
		//ori is the original number.
		int ori=i;
		int rev=0,rev2=0;
		//sq1 is the sqaure of original number.
		int sq1=i*i;
		while(ori!=0)
		{
			int rem1=ori%10;
			//rev is the reverse of the original number.
			rev=(rev*10)+rem1;
			ori/=10;
		}
		//sq2 is the square of the reversed number.
		int sq2=rev*rev;
		while(sq1!=0)
		{
			int rem2=sq1%10;
			//rev2 is the reverse of sq1.
			rev2=(rev2*10)+rem2;
			sq1/=10;
		}
		if(rev2==sq2){
			printf("\n%d is a special number",i);
		}
	}
	return 0;
}
