#include<stdio.h>
int stair(int n){
	if(n==1||n==2) return  ;
	int totalways = stair(n-1) + stair (n-2);
	return totalways;
	}
int main(){
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int ways= stair(n);
	printf("%d",ways);
	return 0;
}
