// Please read all the comments in this code for instruction
/* The announce lab quiz policy applies to this lab quiz.
The following piece of code creates a sorted linked list with 3, 4, 5, 6. A simplePrint function is used to print the data in the linked list. You can run and test the content of the linked list.

What you have to do:

There are two blank functions bellow that you should complete based on the requirements described as comments inside the function.
To test your function you may or may not need to uncomment/add lines in main function. Compare your result with the comment given in main function.

After completing the code and testing, submit the modified file in webocurses before the due time.
Caution: No code will be accepted in email if you miss the deadline. Also do not share your code as sharing will be considered as dishonesty and will be treated accordingly.

                  Write your name here: Maria Corella
                   your UCFID: 4418914

*/


#include<stdio.h>
#include<stdlib.h>

 typedef struct nod{
	int info;
	struct nod *next;
}node;

node* SortInsert(node *root, int item); //this function is complete
void simplePrint(node* root); //this function is complete
void printLast(node* root); //you have to write this function, see bellow //total grade 5
node* InsertAfter5 (node * root, int item); //you have to write this function, see bellow // total grade 5



int main()
{
    node* head=NULL;
	node* head2 = NULL;

	node *t;
	int ch,ele;
	head = SortInsert(head, 4);
	head = SortInsert(head,6);
	head = SortInsert(head,3);
	head = SortInsert(head,5);

    printf("\nSimple print List 1: ");
    simplePrint(head);

    printLast(head); ////modify the printLast function to make it work

    head = InsertAfter5(head, 100); //modify the InsertAfter5 function to make it work
    printf("\nSimple print after InsertAfter5 with 100: ");
    simplePrint(head); //This call should print 3, 4, 5, 100, 6


	return 0;

}

void simplePrint(node* root)
{
    node* t=root;
    while(t!=NULL)
    {
        printf("%d ",t->info);
        t=t->next;
    }
}

node*  SortInsert(node* root, int item)
{
    node *temp;
    node *t;
    temp= (node *) malloc(sizeof(node));
    temp->info=item;
    temp->next=NULL;
    if (root==NULL || root->info >=item)
    {
            temp->next = root;
            root = temp;
    }
    else
    {
         t = root;
         while (t->next != NULL && t->next->info <item)
                   t = t->next;
         temp->next = t->next;
         t->next = temp;
    }

    return root;
}

///////// All questions are starting here//////////////////


void printLast(node* root)
{
    /*this function takes the head of a linked list and print the last  or known as tail item in the linked list
    for example: passing the head of a linked list containing 3, 4, 5, 6 would print 6*/

    //start writing your code from here
    node *ptr = root;
    while (ptr->next != NULL){
    	ptr = ptr->next;
	}
	
    printf("\nThe last item in this list is: %d\n", ptr->info); 
};


node* InsertAfter5 (node * root, int item)
{
         /*this function takes the head of a linked list and an integer item.
        The funciton add the integer item in a node after the node containing 5. Next, it reutns the head.
        Example: if item = 100, Linked list 3, 4, 5, 6 will be changed to 3, 4, 5, 100, 6 */
        
        node *ptr = root;
        
        while (ptr->info != 5){
        	ptr = ptr->next;
		}
        
		node *new = (node*)malloc(sizeof(node))	;
		new->info = item;
		new->next = ptr->next;
		ptr->next = new;
		
        return root;
};


