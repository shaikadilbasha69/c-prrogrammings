#include<stdio.h>
int main ()
{
	int n,d, sum=0,c,temp;
	printf("enter n value");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		c=d*d*d;
		sum=sum+c;
		n=n/10;
	}
	if(sum==temp)
	printf("it is a arm strong");
	else
	printf("it is a not a arm strong");
	return 0;
}

