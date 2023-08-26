#include<stdio.h>
int main(){
	int arr[5] = {'a','b','9','d'};
	printf("%d",arr[2]);
	return 0;
}
//SECOND METHOD 
#include<stdio.h>
int main(){
	char ch = '9';
	int x = (int)ch;
	printf("%d",&x);
	return 0;
}
