#include<stdio.h>
long int fact (int n);
int main ()
{
	int n,x,i,f;
	printf("enter n value ");
	scanf("%d",&n);
	f=fact(n);
	printf("the factorial number in =%ld",f);
	return 0;
}
long int fact(int n)
{
	if (n==0)
	return 1;
	else return (n*fact(n-1));
}
