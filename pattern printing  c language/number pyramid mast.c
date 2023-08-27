#include<stdio.h>
int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int i; int j; int k; int q;
	int nsp=n-1;
	for(i=1;i<=n;i++){
		int a = i-1;
		for(q=1;q<=nsp;q++){
			printf(" ");
			nsp--;
		}
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		for(k=1;k<=i-1;k++){
			printf("%d",a);
			a--;
		}
		printf("\n");
	}
	return 0;
}
