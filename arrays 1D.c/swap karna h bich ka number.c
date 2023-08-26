#include<stdio.h>
int main(){
	int arr[7] = {1,2,3,4,5,6,7};
	int i,j;
	for(i=1,j=4;i<=j;i++,j--){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	for(i=0;i<=6;i++)
	printf("%d",arr[i]);
	return 0;
}
