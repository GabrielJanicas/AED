#include <stdio.h>

int main(void){
	char str[50];

	printf("Enter your name: ");
	scanf("%s", str);
	printf("Hello %s", str);
	return 0;
}