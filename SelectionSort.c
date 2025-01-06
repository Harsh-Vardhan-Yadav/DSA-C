#include<stdio.h>
int main()
{ 
   int a[20],i,j,temp,n,s;
  printf("Enter The Size : ");
  scanf("%d",&n);
  printf("Enter The %d Element : ",n);
  for(i=0; i<n; i++)
   scanf("%d",&a[i]);
  for(i=0; i<n-1; i++)
  {
    s=i;
    for(j=i+1; j<n; j++)
    {
      if(a[j]<a[s])
       s=j;
    }
       temp=a[i];
       a[i]=a[s];
       a[s]=temp;
  }
  printf("Sorted List : ");
  for(i=0; i<n; i++)
  printf("%d ",a[i]);
  return 0;
}