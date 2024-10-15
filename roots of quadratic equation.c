#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,r1,r2,D;
printf ("enter a,b,c values in the quadratic equation ax^2+bx+c:");
scanf("%d%d%d",&a,&b,&c);
D=(b*b-4*a*c);
r1=(-b+sqrt(D))/(2*a);
r2=(-b-sqrt(D))/(2*a);
if(D>=0)
printf("the roots of the given quadratic equation are %d and %d",r1,r2);
else
printf ("roots are imaginary ");
}