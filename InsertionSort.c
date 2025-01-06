#include<stdio.h>
int main()
{ 
  int a[20],i,j,temp,n,cr,pre;
  printf("Enter The Size : ");
  scanf("%d",&n);
  printf("Enter The %d Element : ",n);
  for(i=0; i<n; i++)
   scanf("%d",&a[i]);
  for(i=1; i<n; i++)
  {
    cr=a[i];
    pre=i-1;
    while(pre>=0 && a[pre]>cr)
    {
      a[pre+1]=a[pre];
      pre--;
    }
      a[pre+1]=cr;  //Pleace of Currect Postion. 
  }
  printf("Sorted List : ");
  for(i=0; i<n; i++)
  printf("%d ",a[i]);
  return 0;
}