#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
void insertend (int x);

void insert (int x);

void print ();

void deletion ();
void deletionbeg();

void insertmid (int x, int n);
void deletionmid(int n);

void print1 ();



struct node *start;
main ()
{
  int a, x, n;
  start = NULL;

  printf ("\n1:for insertion at beginning");
printf ("\n2:for insertion at middle");
  printf ("\n3:for insertion at end");
  printf("\n4:for deletion at beginning");
   printf("\n5:for deletion from middle");
  printf ("\n6:for deletion from end");
   printf ("\n7:exit\n");

  while (1)
    {

      printf ("enter the value of a\t");
      scanf ("%d", &a);
      switch (a)
	{
	case 1:
	  printf ("\nenter the no.\t");
	  scanf ("%d", &x);
	  insert (x);
	  print1 ();
	  break;
	case 3:
	  printf ("\nenter the no.\t");
	  scanf ("%d", &x);
	  insertend (x);
	  print1 ();
	  break;
	case 6:
	  deletion ();
	  print1 ();
	  break;
	case 2:
	  printf ("\nenter the no.");
	  scanf ("%d", &x);
	  insertmid (x, n);
	  print1 ();
	  break;
	  case 5:deletionmid(n);
	  print1();
	  break;
	  case 4: deletionbeg();
	  print1();
	  break;
	case 7:
	  exit (1);

	}
    }


}

void
insert (int x)
{
  struct node *head = (struct node *) malloc (sizeof (struct node));
  head->data = x;
  head->next = start;

  start = head;
}

void
insertend (int x)
{
  struct node *temp = (struct node *) malloc (sizeof (struct node));
  struct node *temp1;

  temp->data = x;

  temp->next = NULL;

  temp1 = start;

  while (temp1->next != NULL)
    temp1 = temp1->next;
  temp1->next = temp;
}

void
deletion ()
{


  struct node *temp1, *temp2;
  if(start->next==NULL)
  {
      temp1=start;
      start=NULL;
      free(temp1);
  }
  else
    {
      temp1 = start;
      while (temp1->next != NULL)
    {
      temp2 = temp1;
      temp1 = temp1->next;

    }

  temp2->next = NULL;

  free (temp1);
  }





  }

void
print1 ()
{

  struct node *r = start;
if (start==NULL)

    printf ("\nthe list is empty\n");
  else
    {
      printf ("\nthe list is:");
      while (r != NULL)
	{
	  printf ("%d ", r->data);

	  r = r->next;
	}
	printf("\n");
    }
}

void
insertmid (int x, int n)
{
  int i = 1;
  struct node *newnode = (struct node *) malloc (sizeof (struct node));
  struct node *current = start, *prev;
  printf ("\nenter the position:");
  scanf ("%d", &n);
    while (current != NULL && i < n)
    {
      prev = current;
      current = current->next;
      i++;
    }
  newnode->data = x;
  newnode->next = current;
  prev->next = newnode;

}

void deletionmid(int n)
{
    int i = 1;

  struct node *current=start , *prev;
  printf ("enter the position:");
  scanf ("%d", &n);
if(n==1)
{
    start=current->next;


}

else
{
    while ( i < n-1)
    {

      current = current->next;
      i++;
    }
 prev=current->next;
 current->next=prev->next;
 free(prev);
}
}

void
deletionbeg ()
{

  if (start == NULL)
    printf ("\nthe list is empty\n");
  else
    {
      struct node *temp;
      temp = start;
      start = start->next;
      free (temp);
    }
}

