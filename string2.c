#include <stdio.h>
int main()
{
    char name[5];
    printf("Enter name: ");
    gets(name);     // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
