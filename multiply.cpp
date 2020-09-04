#include <stdio.h>
#include <stdlib.h>

int multiply(int a, int b) {
  return a * b;
}
int main(int argc, char **argv) {
	int f_number = 0;
	int s_number = 0;
	printf("What is the first number?\n");
	scanf("%d", &f_number);
	printf("What is the second number?\n");
	scanf("%d", &s_number);
	printf("%d x %d = %d\n", f_number, s_number, multiply(f_number,s_number));
	
	
	
	
}
