#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;
	clrscr();
	printf("enter the number of rows: ");
	scanf("%d",&n);
	printf("\npyramid of * with %d rows:\n ",n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=0;j<n-i;j++)
		printf(" ");
		for(k=0;k<2*i-1;k++)
		printf("*");
	}
	getch();
}