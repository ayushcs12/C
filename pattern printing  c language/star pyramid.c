#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int i; int j; int k;
	int a=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-1;j++){
			printf(" ");
		}
		for(k=1;k<=a;k++){
			printf("*");
		}
		a=a+2;
		printf("\n");
	}
	return 0;
}
