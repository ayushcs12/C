sare method h isma ulta,sidha,different aur different method ana jaruri ha

/*#include<stdio.h>
#include<limits.h>
int main(){
	int arr[8] ={1,2,3,4,5,6,7,8};// sidha nuber ho agar. 
	int max =  INT_MIN;
	int smax = INT_MIN;
	int i;
	for(i=0;i<=7;i++){
		if(max<arr[i]){
			smax = max;
			max = arr[i];
		}
	}
	printf("%d",smax);
	return 0;
}*/
/*#include<stdio.h>
#include<limits.h>
int main(){
	int arr[7] ={7,6,5,4,3,2,1};// ULTA NUMBER HO AGAR.
	int max =  INT_MIN;
	int smax = INT_MIN;
	int i;
	for(i=0;i<=6;i++){
		if(max<arr[i]){
			smax = max;
			max = arr[i];
		}
		else if(smax<arr[i]){
			smax = arr[i];
		}
	}
	printf("%d",smax);
	return 0;
}*/
#include<stdio.h>
#include<limits.h>
int main(){
	int arr[7] ={1,2,3,4,4,1,2};// DIFFERENT NUMBER HO AGAR.
	int max =  INT_MIN;
	int smax = INT_MIN;
	int i;
	for(i=0;i<=6;i++){
		if(max<arr[i]){
			smax = max;
			max = arr[i];
		}
		else if(smax<arr[i] && max!=arr[i]){
			smax = arr[i];
		}
	}
	printf("%d",smax);
	return 0;
}
