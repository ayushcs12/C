#include<stdio.h>
int main(){
	int arr[7] = {11,9,2,8,21,5,12};
	int max=0; int i;
	for(i=0;i<=6;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("%d",max);
	return 0;
}
