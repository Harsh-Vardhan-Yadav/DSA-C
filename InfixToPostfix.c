// Conversion of Mathematics Expression Infix to postfix using stack.
#include<stdio.h>
#include<ctype.h>
#include<string.h>
char stk[20];
int top=-1;
void push(char ch){
  top++;
  stk[top]=ch;
}
char pop(){
  char ch;
  ch=stk[top];
  top--;
  return ch;
}
int isoperator(char op){
  if(op=='+' || op=='-' || op=='*' || op=='/' || op=='%')
    return 1;
  else
    return 0;  
}
int ispriority(char op){
  if(op=='*' || op=='/' || op=='%')
    return 2;
  else if(op=='+' || op=='-')
    return 1;
  else
    return 0;    
}
int main()
{ 
  char in[20],p[20],sym;
  int i=0,j=0;
  printf("Enter The Infix Expression :");
  gets(in);
  strcat(in,")");
  push('(');
  while (in[i]!='\0')
  {
    sym=in[i];
    if (isalpha(sym))
    {
      p[j]=sym;
      j++;
    }
    else if(isoperator(sym)){
      while (ispriority(stk[top])>=ispriority(sym))
      {
        p[j]=pop();
        j++;
      }
      push(sym);
    }
    else if(sym==')'){
      while(stk[top]!='('){
        p[j]=pop();
        j++;
      }
     }
    i++;
    p[j]='\0';
  }
  printf("Postfix Expression : %s",p);
  return 0;
}