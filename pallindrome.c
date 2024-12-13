#include <stdio.h>

int main() {
int n,rem,rev=0,p;
printf("nvalue");
scanf("%d",&n);p=n;
while(n>0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;

}
if(p==rev)
{
    printf("the given is %dpallindrome");
}
else
{
    printf("the given is %d notpallindrome");
}
}
