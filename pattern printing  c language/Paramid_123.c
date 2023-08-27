#include<stdio.h>
int main()
{
	int n= 5; //size
	int px=n;
	int py=n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(j>px && j<py)
			{
				printf(" ");
				
			}
			else
			{
				printf("*");
			}
		}
		px--;
		py++;
		printf("\n");
	}
}
