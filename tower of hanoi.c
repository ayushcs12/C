#include<stdio.h>
int tower(int n , char s, char h , char d){
	if(n==0) return ;
	tower(n-1,s,d,h);
	printf("%c ->%c\n",s,d);
	return 0;
}
int main(){
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	tower(n,'a','b','c');
	return 0;
}
