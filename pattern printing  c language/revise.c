#include<stdio.h>
int main()
{
	int n;
	printf("enter no. a line : ");
	scanf("%d",&n);
	int i; int j; int a=1;
	for( i=1;i<=n;i++){
		for( j=1;j<=n-1;j++){
			printf(" ");
			}
			for(j=1;j<=a;j++){
				printf("*");
			}
			a=a+2;
			printf("\n");
	}
	return 0;
}
