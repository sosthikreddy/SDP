#include <stdio.h>

int main() {
int n,dig,temp=0,pos=0;
scanf("%d",&n);
while(n>0){
  dig=n%10;
  if(dig==0){
    dig=1;
  }
  temp=temp*10+dig;
  n=n/10;
}
printf("%d",temp);
  
}