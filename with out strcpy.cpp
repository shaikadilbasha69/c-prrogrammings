#include<stdio.h>
#include<string.h>
int main ()
{
	char s1[20],s2[20];
	int i;
	printf("enter string s1");
	gets(s1);
	for(i=0;s1[i]!=0;i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	puts(s1);
	puts(s2);
	return 0;
}
