/* CS1 */

#include<stdio.h>
#include<stdlib.h>
 typedef struct nod{
	int data;
	struct nod *next;
}node;
node *root;

void insert_front(int item)
{
	node *t;
	node *temp;
	temp= (node *) malloc(sizeof(node));
	temp->data=item;
	temp->next=NULL;
	if(root==NULL)
        root=temp;
    else
    {
        temp->next = root;
        root = temp;
    }

}


void insert_end(int item)
{
	node *t;
	node *temp;
	temp= (node *) malloc(sizeof(node));
	temp->data=item;
	temp->next=NULL;
	if(root==NULL)
		root=temp;
	else
	{
		t=root;
        while(t->next!=NULL)
            t=t->next;
        t->next=temp;
	}
}

int DelList(int item)
{
	node *t;
	node *temp;
	if(root==NULL)
		return 0;
	if(root->data==item)
	{
		temp=root;
		root=root->next;
		free(temp);
		return 1;
	}

	t=root;

	while(t->next!=NULL && t->next->data != item)
		t=t->next;
	if(t->next==NULL)
		return 0;
	temp=t->next;
	t->next=t->next->next;
	free(temp);
	return 1;
}
void main()
{
	root=NULL;
	node *t,del;
	int ch,ele,v;
	while(1)
	{
		printf("\nMenu: 1. insert at front, 2. insert at end, 3. Delete 4. exit: ");
	    scanf("%d",&ch);
		if(ch==4)
		{
			printf("\nGOOD BYE>>>>\n");
			break;
		}
		if(ch==1)
		{
			printf("\nEnter information(an integer): ");
			scanf("%d",&ele);
			insert_front(ele);
			printf("\nPrinting ur link list.......");
			t=root;
			while(t!=NULL)
			{
				printf("%d ",t->data);
				t=t->next;
			}
		}
		if(ch==2)
		{
			printf("\nEnter information(an integer): ");
			scanf("%d",&ele);
			insert_end(ele);
			printf("\nPrinting ur link list.......");
			t=root;
			while(t!=NULL)
			{
				printf("%d ",t->data);
				t=t->next;
			}
		}
	   if(ch==3)
	   {
		 printf("\nEnter info which u want to DELETE: ");
		 scanf("%d",&del.data);
		 v=DelList(del.data);
		 if(v==1)
		 {
			printf("\nDELETing....");
			t=root;
			while(t!=NULL)
			{
				printf("%d ",t->data);
				t=t->next;
			}
		 }
		  else if(v==0)
			printf("\nUr info does not exist in the list");


	   }
	}
}
