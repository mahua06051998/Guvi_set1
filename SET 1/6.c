#include<stdio.h>

int checkLeapOrNot(int year)
{
 int leap = 0;
if(year % 400 == 0)
  leap = 1;
  if(year % 100 == 0)
   leap = 0;
else
   if(year % 4 == 0)
     leap = 1;

return leap;
}
int main() {

int year;
scanf("%d",&year);

    if(checkLeapOrNot(year))
       printf("yes");
    else
      printf("not");
}
