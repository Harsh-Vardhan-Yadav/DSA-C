#include<stdio.h> //Prince
#include<conio.h>
#include<stdlib.h>
//Create the Node
struct node{
 int data;
 struct node *next;
}*start=NULL;
//Inseart node at the end of cuurent list.
void insertEnd(int n)
{
 struct node *newnode,*temp;
 newnode = (struct node*) malloc (sizeof(struct node));
 newnode->data=n;
 newnode->next=NULL;
 temp=start;
 if(start==NULL)
 start=temp->next;
 while(temp->next!=NULL)
 {
 temp=temp->next;
 }
 temp->next=newnode;
}
//Inseart node at the Begain of cuurent list.
void insertAtBegin(int n)
{
 struct node *newnode;
 newnode = (struct node*) malloc (sizeof(struct node));
 newnode->data=n;
 if(start==NULL)
 newnode->next=NULL;
 else
 newnode->next=start;
 start = newnode;
}
//Insert the node at the specfic Position.
void insertAtSpecificPos(int n,int pos){
 struct node *prev,*temp,*newnode;
 int c=0;
 newnode = (struct node*) malloc (sizeof(struct node));
 temp=start;
 while(temp!=NULL)
 {
 if(c==pos-1)
 break;
 c++;
 prev=temp;
 temp=temp->next;
 }
 prev->next=newnode;
 newnode->data=n;
 newnode->next=temp;
}
void deleteFromBegin()
{
 struct node *temp;
 temp = start;
 if(temp->next==NULL)
 {
 printf("List is Empty.");
 return;
 }
 start = start->next;
 printf("%d is deleted",temp->data);
 free(temp);
}
//Delete Node form the End of List;
void deleteFromEND(){
 struct node *temp,*prev;
 temp=start;
 if(temp==NULL)
 {
 printf("List is Empty");
 return;
 }
 while(temp->next!=NULL)
 {
 prev=temp;
 temp=temp->next;
 }
 prev->next=NULL;
 printf("%d is delete\n",temp->data);
 free(temp);
 }
//Delete the node in Specific Position of the List.
 void DeleteSpecificPos(int pos){
 int c=0,x;
 struct node *temp,*prev;
 temp=start;
 while(temp!=NULL){
 if(c==pos-1)
 break;
 c++;
 prev=temp;
 temp=temp->next;
 }
 x = temp->data;
 printf("%d is delete.",x);
 prev->next=temp->next;
 free(temp);
 }
//Display the single linked list.
void display(){
 struct node *temp;
 temp=start;
 while(temp!=NULL)
 {
 printf("%d ",temp->data);
 temp=temp->next;
 }
 }
// Count the nodes of cuurent list
 void count(){
 int c=0;
 struct node *temp;
 temp=start;
 while(temp->next!=NULL)
 {
 temp=temp->next;
 c++;
 }
 printf("Total Nodes %d ",++c);
 }
 void main()
{
 int ch,n,pos;
 while(1){
 printf("1. Insert of Node at the End \n");
 printf("2. Insert of Node at the Begnning \n");
 printf("3. Insert of Node at the Speccfic Position \n");
 printf("4. Deleation of Node from the begenning \n");
 printf("5. Deleation of Node from the END \n");
 printf("6. Deleation of Node from the Specefic Postion \n");
 printf("7. Display the Nodes \n");
 printf("8. Count total Number of Nodes \n");
 printf("9. Exit the while program \n");
 printf("Now we select the operation based on choice ");
 scanf("%d",&ch);
 switch(ch){
 case 1:
 printf("Enter The data :");
 scanf("%d",&n);
 insertEnd(n);
 break;
 case 2:
 printf("Enter the data :");
 scanf("%d",&n);
 insertAtBegin(n);
 break;
 case 3:
 printf("Enter the postion and data :");
 scanf("%d%d",&pos,&n);
 insertAtSpecificPos(n,pos);
 break;
 case 4:
 deleteFromBegin();
 getch();
 break;
 case 5:
 deleteFromEND();
 getch();
 break;
 case 6:
 printf("Enter the Postion : ");
 scanf("%d",&pos);
 DeleteSpecificPos(pos);
 getch();
 break;
 case 7:
 display();
 getch();
 break;
 case 8:
 count();
 getch();
 break;
 case 9:
 exit(0);
 default:
 printf("Wrong choice!! Try again \nSelect right operation ");
 getch();
 }
 }
 getch();
 }