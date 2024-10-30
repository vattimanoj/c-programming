#include<stdio.h>
void main()
{
    int n,t;
    printf("enter a number");
    scanf("%d",&n);
    t=n%2;
    switch(t)
    {
        case 0:printf("the given number %d is even",n);
        break;
        case 1:printf(" the given number %d is odd",n);
        break;
    }
    
}
