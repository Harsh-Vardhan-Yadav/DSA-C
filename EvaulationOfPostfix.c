//Evaluate the Postfix Postfix using Satck.
#include<stdio.h>     
#include<ctype.h>
int stk[10],top=-1;
void push(char n)
{
  top++;
  stk[top]=n;
}
char pop()
{
 char ch;
  ch=stk[top];
  top--;
  return ch;
}
int main()
{
 int i=0,n1,n2,res;
 char p[10];
 printf("Enter The Element :");
 gets(p);
 while(p[i]!='\0'){
  if(isdigit(p[i])){
    push(p[i]-48);
    }
  else{
    n2=pop();
    n1=pop();
    switch(p[i]){
      case '+':
       res=n1+n2;
       break;
      case '-':
       res=n1-n2;
       break;
      case '*':
       res=n1*n2;
       break;
      case '/':
      res=n1/n2;
       break;  
    }
    push(res);
  }  
  i++;
 }
 printf("Result = %d",pop());
 return 0;
 }