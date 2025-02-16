// Reverse the String Using Stack
#include<stdio.h>
#include<string.h>
int top=-1,size=20,i=0;
char stk[20],rev[20]; 
void push(char n){
 if(top==size-1){
   printf("Give small Length String It is too Largest.");
    return;
 }
   top++;
   stk[top]=n;
}
void pop()
{
  int n;
  n=stk[top];
  rev[i]=n;
  top--,i++;
}
int main()
{ 
  char str[20];
  int i;
  printf("Enter The String :");
  gets(str);
  for(i=0; i<strlen(str); i++)
   push(str[i]);
  for(i=0; i<strlen(str); i++)
    pop();
    rev[i]='\0';
    printf("Reverse String : ");
    puts(rev);
  return 0;
}
