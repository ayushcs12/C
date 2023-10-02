#include<stdio.h>
int zigzag(int n){
	if(n==0) return ;
	printf("%d",n);
	zigzag(n-1);
	printf("%d",n);
	zigzag(n-1);
	printf("%d",n);
	return 0;
}
int main(){
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	zigzag(n);
	return 0;
}
