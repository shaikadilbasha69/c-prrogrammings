#include<stdio.h>
int main ()
{
	int units;
	float amount,charge,totalamount;
	printf("no of units consumed");
	scanf("%d",&units);
	if (units<=100)
	{ 
	amount=units*1.50;
	charge=2.5;
	}else if(units<=200)
{amount= units *2.50;
charge=50;
}else if (units<=300)
{amount =units*3.50;
charge=75;
}else if (units<=400)
{amount=units*4.50;
charge=100;
}
totalamount=amount+charge;
printf("electricity bill=%2f",totalamount);
return 0;
}
