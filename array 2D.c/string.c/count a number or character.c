#include<Stdio.h>
#include<string.h>
int main(){
	char str[40];
	puts("enter a string :");
	scanf("%[^\n]s",str);
	puts("the size of is : ");
	int size =0;
	int i=0;
	while(str[i]!='\0'){
		size++;
		i++;
	}
	printf("%da",size);
	return 0;
}
