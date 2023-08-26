#include<stdio.h>
int main(){
	int arr[7] = {1,2,3,4,5,6,7};
	int reverse[7];
	int i;
	for(i=0;i<=6;i++){
		reverse[i] = arr[6-i];
	}
	for(i=0;i<=6;i++){
		printf("%d",reverse[i]);
	}
	return 0;
}
