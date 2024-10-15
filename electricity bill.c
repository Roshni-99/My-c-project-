#include<stdio.h>
 main()
{
float n,rs;
printf("enter no.of units:");
scanf("%f",&n);
 if(n<=50.0)
    rs=n*0.50;
 else if(n>50.0&&n<=150.0)
    rs=(50*0.50)+(n-50)*0.75;
 else if(n>150&&n<=250)
    rs=(50*0.50)+(100*0.75)+(n-150)*1.20;
 else
    rs=(50*0.50)+(100*0.75)+(100*1.20)+(n-250)*1.50;
 printf("total electricity bill is %f",rs);
} 