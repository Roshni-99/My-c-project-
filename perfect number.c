#include<stdio.h>
void main()
{
int n,i,sum=0;
printf ("enter the number:");
scanf ("%d",&n);
for(i=1;i<n;i++)
if(n%i==0)
sum=sum+i;
if(sum==n)
 printf ("given number is a perfect number");
else
 printf ("the given number is not a perfect number ");
 }