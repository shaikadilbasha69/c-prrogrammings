#include<stdio.h>
int main()
{
int x=5,y=2;
float c,d;
c=x/y;
printf("implicit c value=%f",c);
d=(float)x/y;
printf("\n explicit d values=%f",d);
return 0;
}
