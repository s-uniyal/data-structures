#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(int x);
main()
{
   int a,x;
   while(1)
   {
          printf("\nenter your choice: ");
   scanf("%d",&a);
   switch(a)
   {
                case 1: printf("\nenter the no. you want to insert: ");
                scanf("%d",&x);
                push(x);
                 break;
                 case 2: pop();
                 break;
                 case 3: print();
                 break;
                 default: exit(1);
   }

   }
}
void
push (int x)
{
  struct node *temp = (struct node *) malloc (sizeof (struct node));
  temp->data = x;
  temp->next = top;
  top = temp;
}
void pop()
{
    if(top==NULL)
        printf("\n***** the stack is empty*****");
    else
    {
         struct node *temp;
    temp=top;
    top=temp->next;
    printf("\ndeleted element is %d",temp->data);
    free(temp);
    }
}
print()
{
    struct node *temp=top;
   while(temp!=NULL)
        {
            printf(" %d  ",temp->data);
            temp=temp->next;
        }
}



