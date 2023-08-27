#include<stdio.h>
int main()
{
	int n;
	printf("entera row :");
	scanf("%d",&n);// int m ko bhi use kar sakta h
//	int m;
//	printf("entera column :");
//	scanf("%d",&m);
	int i; int j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
