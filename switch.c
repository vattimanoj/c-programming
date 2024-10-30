#include <stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter a ,b and operator" );
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case '+':
                printf("the addition is %d",a+b);
                 break;
        case '-':
                  printf("the subtration is %d",a-b);
                 break;
        case '*':
                    printf("the multiplicaltion is %d",a*b);
                    break;
        case '/':
                  printf("the division is %d",a/b);
                 break;
        case '%':
                 printf("the remainder is %d",a%b);
                 break;
        default :
                 printf("invalid");
                 break;
}
}
