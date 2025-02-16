 /*Implementation of Stack using Array 
 Flowing Operation :-
 1. Insert Data in Stack
 2. Delete the Data
 3. Display The Data */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int stk[5],top=-1,size=5;
void push(int n){
  if(top==size-1){
    printf("Stack is Full.\n");
    return;
  }
  top++;
  stk[top]=n;
}
void pop(){
   int a;
  if(top==-1){
   printf("Satck is Empaty\n");
   return;
  }
   a=stk[top];
   top--;
   printf("%d is poped.\n",a);
}
void display(){
   int i;
   if(top==-1){
    printf("Stack is empty.\n");
    return;
   }
  for(i=top; i>=0; i--)
   printf("%d ",stk[i]);
   printf("\n");
    getch();
}
int main(void)
{ 
  int ch,n;
  while(1){
  printf("1. For The Push Operation in Stack :\n");
  printf("2. For The Pop Operation in Stack :\n");
  printf("3. For The Display Operation in Stack :\n");
  printf("4. For The Exit Operation in Stack :\n");
  printf("5. Select the Operation :");
  scanf("%d",&ch);
  switch (ch)
  {
case 1:
   printf("Enter The DATA :");
   scanf("%d",&n);
   push(n);
  break;  
case 2:
   pop();
  break;
case 3:
   display();
   break;
case 4:
   exit(0);
default:
   printf("Wrong choice Try Agin......\n");   
  }  
  }
  return 0;
}