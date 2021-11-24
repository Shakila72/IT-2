#include<stdio.h>

int main()

{
	
int n;

printf("Enter a positive integer:");
scanf("%d",&n);

for (int i=1,j=n;i<=n&&j>0;i++,j--)
{
	printf("%d,",j);
	printf("%d,",i);
}
return 0;
}
