#include<stdio.h>
int main(){
	int marks[10] ={95,90,40,30,43,31,90,34,48,65};
	int i;
	for(i=0;i<10;i++){
		if(marks[i]<35){
			printf("%d ",i);// marks[i]; value print karna ka liya
	    }
	}
	return 0;
}
