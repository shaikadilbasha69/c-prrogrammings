#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float avg;
	printf("enter s1,s2,s3,s4,s5, values");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	total=(s1+s2+s3+s4+s5);
	avg=total/5;
	printf("total of five subject is = %d",total);
	printf("avg of five subjects is =%f",avg);
	return 0;
}
