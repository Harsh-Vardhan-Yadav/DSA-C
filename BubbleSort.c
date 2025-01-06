#include<stdio.h>
int main()
{ 
  int a[20],i,j,temp,n;
  printf("Enter The Size : ");
  scanf("%d",&n);
  printf("Enter The %d Element : ",n);
  for(i=0; i<n; i++)
   scanf("%d",&a[i]);
  for(i=0; i<n-1; i++)
  {
    for(j=0; j<n-i-1; j++)
    {
      if(a[j]>a[j+1])
      {
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
      }
    }
  }
  printf("Sorted List : ");
  for(i=0; i<n; i++)
  printf("%d ",a[i]);
  return 0;
}