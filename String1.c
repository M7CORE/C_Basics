#include <stdio.h>
int main()
{
    char name[20];
    char name2[20];
    printf("Enter name: ");
    scanf("%s %s", name, name2);
    printf("Your name is %s and %s.", name, name2);
    return 0;
}

/*
Output:
Enter name: Nusair Ahmed
Your name is . Nusair //see it failed to keep Ahmed in the string
*/
