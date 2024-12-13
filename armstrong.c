#include <stdio.h>
#include<math.h>

int main() {
    int n,rem,sum=0,temp;
    printf("enter n value");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("the given number %d is armstrong",sum);
        
    }
    else
    {
    printf("the given number %d is not armstrong",sum);
        
    }
    return 0;
}
