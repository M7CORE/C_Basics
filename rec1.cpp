//Prints a string in reverse
//Maria Corella

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print_reverse(char string[], int n);

int main(){
	char str[50];
	
	printf("Enter a string less than 50: ");
	scanf ("%s", str);
	
	print_reverse(str, strlen(str));
	
	return 0;
}

void print_reverse(char str[], int n) {
	if (n == 1)
		printf("%c", str[0]);
	else {
		printf("%c", str[n - 1]);
		print_reverse(str, n - 1);
	}
		
}
