#include<stdio.h>
int main(){
	char arr[] = {"ayush tyagi"};
	int i=0;
	while(arr[i]!='\0'){
	printf("%c",arr[i]);
	i++;
	}
	return 0;
}
//agar hum arr[i] ki value maximum rakhta h to work performly.
//agar hum arr[i] ki value minimum rakhta h to not work performly.
//chek this code.
