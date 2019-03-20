#include<stdio.h>
int main()
{
int N,K,sum=0;
scanf("%d %d",&N,&K);
int arr[N];
for(int i=0;i<N;i++) {
   scanf("%d",&arr[i]);
   }
for(int j=0;j<K;j++){
sum += arr[j];
}
printf("%d",sum);
}
