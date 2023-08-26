#include<Stdio.h>
#include<string.h>
int main(){
	char s1[] = "ayush tyagi";
	char* s2 = s1;//main
	s1[2]='m';//0,1,2,3..
	printf("%s",s2);
	return 0;
}
