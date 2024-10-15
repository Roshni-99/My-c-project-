#include<stdio.h>
void main()
{
int a,b,X,Y,i;
printf("enter the from and to  numbers:");
scanf("%d%d",&X,&Y);
printf ("enter the divisors:");
scanf("%d%d",&a,&b);
for(i=X;i<=Y;i++)
  {
  if(i%a==0&&i%b==0)
  printf("\n%d",i);
  }
 }