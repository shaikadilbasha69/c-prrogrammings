#include<stdio.h>
int main(){
	int x=10,p,r,q,s;
	p=++x;
	printf("%d",p);
	r=x--;
	printf("\n %d",r);
	q=x++;
	printf("\n %d",q);
	s=--x;
	printf("\n %d",s);
	printf("\n x=%d",x);
	return 0;
}
