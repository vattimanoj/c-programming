#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        printf("real&distint");
        r1=-b+sqrt(d/(2*a));
        r2=-b-sqrt(d/(2*a));
        printf("r1=%f\nr2=%f",r1,r2);
        
    }
    else if(d<0)
    {
        printf("real and imaginary");
    }
    else
    {
        printf("real and eqaul");
        r1=r2=-b/(2*a);
        printf("r1=%f\nr2=%f",r1,r2);
    }
}
