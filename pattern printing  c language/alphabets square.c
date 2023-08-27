#include<stdio.h>
int main()
{
	int n;
	printf("enter a row :");
	scanf("%d",&n);
	int i; int j;
	//	int a=1;
	for(i=1;i<=n;i++){
		int a=1;
		for(j=1;j<=n;j++){
			int d=a+64;
			char ch=(char)d;
			printf("%c ",ch);// agar hum ch ki jangha a lata h to pta nhi kya ata h try this .
			a++;
		}
		printf("\n");
	}
	return 0;
}
