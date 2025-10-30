#include<stdio.h>
int main ()
{
	int x,y,a,b;
	printf("enter x&y values");
	scanf("%d%d",&x,&y);
	a=x>>y;
	printf("bitwise right shift =%d",a);
	b=x<<y;
	printf("bitwise left shift =%d",b);
	return 0;
}
