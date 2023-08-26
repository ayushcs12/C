#include<stdio.h>
int main(){
	int arr[] = {'a','y','u','s','h','\0'};
	int i=0;
	while(arr[i]!='\0'){
	printf("%c",arr[i]);
	i++;
	}
	return 0;
}
