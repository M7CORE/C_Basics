#include <stdio.h>

int main()
{
	int id;
	char name[30];
	char ch, c;
	while(1){
		printf("\nMenu, e: enter, x: exit: ");
	    scanf("%c",&ch);
		if(ch=='x'){
			printf("\n<<<<<<<EXIT>>>>>>\n\n\n");
			break;
		}
		if(ch=='e'){
			printf("\nEnter student id: ");
			scanf("%d",&id);
			printf("\nEnter student name: ");
			scanf("%[^\n]s",name);
			printf("Your entered %d %s", id, name);
		}
	}
	return 0;
}
