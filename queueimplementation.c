#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *start=NULL, *end=NULL;
void enqueue(int x);
void dequeue();
void print();
main()
{
  int a,x;
  printf("1:enqueue an element in queue\n");
  printf("2:dequeue an element from queue\n");
  printf("3:print the queue\n");
  printf("press any key other than choices given above to exit");
  
  while(1)
  {
    printf("\nenter your choice: ");
  scanf("%d",&a);
    switch(a)
    {
      case 1:printf("\nenter the no. to enqueue: ");
      scanf("%d",&x);
      enqueue(x);
      break;
      case 2: dequeue();
      break;
      case 3: print();
      break;
      default: exit(1);
    }
  }
}
void enqueue(int x)
{
  struct node *temp= (struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->next=NULL;
  if(start==NULL && end==NULL)
  {
    start=end=temp;
    return;
  }
  end->next=temp;
  end=temp;
}
void dequeue()
{
  struct node *temp=start;
  if(end==NULL)
  return(printf("\n*****queue is empty*****\n"));
  else
  { if (start==end)
  {
    start=end=NULL;
    printf("\ndequeued element is %d",temp->data);
  }
  else
  {
     start=start->next;
    printf("\ndequeued element is %d",temp->data);
    free(temp);
  }
   
  }
  
}
void print()
{
  struct node *temp= start;
  printf("\nqueue is:");
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
     temp=temp->next;
    
  }
 
}
  

  

