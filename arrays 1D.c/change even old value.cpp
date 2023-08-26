#include<stdio.h>
int main(){
	int arr[7] = {11,9,2,8,21,5,12};
    int i;
	for(i=0;i<=6;i++){
		if(i%2!=0){
			arr[i] =arr[i] *2;
		}
		else{
			arr[i] =arr[i] +10;
		}
	}
	for(i=0;i<=6;i++)
	printf("%d ",arr[i]);
	return 0;
}
