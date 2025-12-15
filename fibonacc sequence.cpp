
#include <stdio.h>
int main()
{ int n, f=0 , S=1 ,t;
printf("enter size of series");
scanf ("%d", &n);
printf("%d%d",f,S);
t=f+S;
while (t<=n){
printf ("%d",t);
f=S;
S=t;
t=f+S;
}return 0;
}
