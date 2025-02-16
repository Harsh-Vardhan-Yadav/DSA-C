// Implementation of Queue using Array 
// Follwing Operation :-
// 1. Insert the Data
// 2. Delete the Data
// 3. Display Data.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int q[5],front=-1,rear=-1,size=5,n;
void insert(int n)
{
 if(rear==size-1)
 {
   printf("Queue is Full.\n");
   getch();
   return ;
 }
 if(front==-1)
   front++;
 rear++;
 q[rear]=n;
}
void del()
{
 if(rear==-1)
  {
   printf("Quene is Empty\n ");
   getch();
   return;
  }
  n=q[front];
  printf("%d is POPED\n ",n);
  if(front==rear)
    front=rear=-1;
  else
    front++;
}
void  display()
{
  int i;
  for(i=front; i<=rear; i++)
  printf("%d ",q[i]);
  printf("\n");
}
int main()
{
 int ch;
 while(1)
 {
 printf("1. Insert The Element :\n");
 printf("2. Delete The Element :\n");
 printf("3. Display The Queue : \n");
 printf("4. Exit \n");
 printf("Enter The Choice : ");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
   printf("Enter The Element :");
   scanf("%d",&n);
   insert(n);
   break;
  case 2:
   del();
   break;
  case 3:
   display();
   break;
  case 4:
   exit(0);
   break;
 }
 }
 return 0;
}