#include<stdio.h>
int main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int i; int j; int k; int l;
	 int nst = n;
	 int nsp = 1;
	 for(i=1;i<=n;i++){
	 	for(j=1;j<=2*n-1;j++){
	 		printf("*");
	 		printf("\n");
		 }
		 for(k=1;k<=nsp;k++){
		 	printf(" ");
		 }
		  for(j=1;j<=nsp;j++){
		 	printf("*");
//		 	 nst--;
//		     nsp+=2;
		 }
     	 nst--;
		 nsp+=2;
		 printf("\n");
	 }
	 return 0;
}
