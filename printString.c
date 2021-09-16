//Prints a string saved within the code and a randomly generated limited length char string.
//Maria Corella

#include <stdio.h>
#include <stdlib.h>

void main(){
	char s[] = "abcdefghijklmnopqrs"; //Initialize string. The content is defined. No bound specified.
	char t[25]; //Initialize string, but not the content. Array length limited to 25.
	printf ("String s: %s String t: %s", s, t);
}

