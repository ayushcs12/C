#include<stdio.h>
int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int i,j,k;
	int nst = n,nsp =1;
	for(i=1;i<=n;i++){
		for(j=1;j<=nst;j++){
		printf("*");
		}
		for(k=1;k<=nsp;k++){
			printf(" ");
		}
		for(j=1;j<=nst;j++){
		printf("*");
		}
		nst--;
		nsp+=2;
		printf("\n");
	}
}
