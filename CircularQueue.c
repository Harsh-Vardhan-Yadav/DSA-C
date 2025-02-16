// Implemetation of Circular Queue using Array.
#include<stdio.h>                           
#include<conio.h>
#include<stdlib.h>
int cq[5],size=5,front=-1,rear=-1;
void insert(int n)
{
 if(front==(rear+1)%size)
 {
  printf("Queue is Full");
  getch();
  return;
 }
 if(front==-1)
  front=0;
 rear=(rear+1)%size;
 cq[rear]=n;
}
 void deleteq()
 {
  int n;
  if(front==-1)
  {
   printf("Queue is Empty");
   getch();
   return;
  }
  n=cq[front];
  printf("%d is deleted",n);
  if(rear==front)
  {
   front=-1;
   rear=-1;
  }
  else
   front=(front+1)%size;
 }
  void display()
  {
   int i=front;
   while(i!=rear)
   {
    printf("%d ",cq[i]);
    i=(i+1)%size;
   }
   printf("%d",cq[rear]);
  }
int main()
{
 int ch,n;
 while(1)
 {
  printf("\n1> Insert Element");
  printf("\n2> Delete Element");
  printf("\n3> Display ");
  printf("\n4> EXIT ");
  printf("\nEnter The Choice :");
  scanf("%d",&ch);
  switch(ch)  {
   case 1:
     printf("Enter The Element :");
     scanf("%d",&n);
     insert(n);
     break;
   case 2:
     deleteq();
     getch();
     break;
   case 3:
     display();
     getch();
     break;
   case 4:
     exit(0);
  } }
 return 0;
}