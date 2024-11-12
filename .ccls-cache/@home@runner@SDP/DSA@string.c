#include <stdio.h>
int main()
{
  int a[100],temp[100];
  int i,j,n;
  printf("enter the size of the array");
  scanf("%d",&n);
  printf("enter the elements of the array");
  for( i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  for(i=0;i<n;i++)
    {
      temp[i]=a[i];
    }
  for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++){
        if(temp[i]>temp[j])
        {
          int t=temp[i];
          temp[i]=temp[j];
          temp[j]=t;
        }
      }
    }
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++){
        if (a[i]==temp[j])
        {
          printf("%d  ",j+1);
        }
      }
    }
}
    
