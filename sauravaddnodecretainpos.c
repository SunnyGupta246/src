#include<stdio.h>
#include<stdlib.h>

   struct node
{
       int data;
       struct node *next;
} ;

void traversallist(struct node *ptr)
{
    int count;
    while(ptr!=NULL)
    {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
    count++;
    }
    printf("\nThe no. of nodes is:%d\n", count);
}
int main()
{
  int pos;
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *newnode, *temp;

  // CREATING THE NODES AND IT WILL ALLOCATE IN THE HEAP DYNAMICALLY
  head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));

  //LINK FIRST AND SECOND NODE
  head->data = 7;//it means the data of head will be 7
  head->next=second; //LINK FIRST AND SECOND NODE

  //LINK SECOND AND THIRD
  second->data = 33;//it means the data of head will be 7
  second->next=third;//the next of head will store second

  //TEMINATE THE LIST AT THE THIRD
  third->data = 65;//it means the data of head will be 7
  third->next=NULL;//the next of head will store second

  //IF WANT TO CREATE MORE NODE CREATE ALLOCATE MORE AT THE END OF THE LINK LIST
  int i=1;
  printf("Enter the positon where you want to insert:\n");
  scanf("%d", &pos);
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter the element you want to insert:\n");
  scanf("%d", &newnode->data);
  temp = head;
  while(i<pos)
  {
      temp=temp->next;
        i++;
  }
  newnode->next = temp->next;
  temp->next=newnode;
  traversallist(head);

  return 0;
}