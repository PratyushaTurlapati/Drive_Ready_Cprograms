#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	fact(n);
	return 0;
}
int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
		fact=fact*i;
	printf("%d",fact);
	return 0;
}
