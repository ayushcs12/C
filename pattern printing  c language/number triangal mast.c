#include<stdio.h>
int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int i; int j; int k; int a;
	int nst = n;
	int nsp = 1;
	for(i=1;i<=n;i++){
		printf("%d",i);
	}
	printf("\n");
		for(i=1;i<=n;i++){
			 a=1;
			for(j=1;j<=nst;j++){
		printf("%d",a);
		a++;
	}
	for(k=1;k<=nsp;k++){
		printf(" ");
		a++;
	}
	for(j=1;j<=nst;j++){
		printf("%d",a);
		a++;
	}
	nst--;
	nsp+=2;
	printf("\n");
	}
	return 0;
}
