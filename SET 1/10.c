#include<stdio.h>
int main()
{
 int n,count=0;
 scanf("%d",&n);
 while(n){
  count +=1;
  n=n/10;
 }
 printf("%d",count);
}
