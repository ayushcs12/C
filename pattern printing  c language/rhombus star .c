#include<stdio.h>
int main()
{
	int n;
	printf("enter no. a line");
	scanf("%d",&n);
	int i; int j; int k;
	for(i=n ; i>=1 ; i--){
		for(j=1;j<=i-1;j++){
			printf(" ");  // agar hum yha pr # likhta h to aga # print ho jayag ;
		}
		for(k=1;k<=n;k++){
			printf("*");
		}
		printf("\n");
     }
	return 0;
}
