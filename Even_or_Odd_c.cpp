#include <stdio.h>
#include <stdlib.h>

const char * even_or_odd(int number){
	if(number % 2 == 0) {
		printf("Even\n");
	} else {
		printf("Odd\n");
	}
}
int main(){
	int a = 0;
	printf("Type a number\n");
	scanf("%d", &a);
	even_or_odd(a);
}
