#include <stdio.h>

int main() {
int i,n,sum=0;
printf("enter n value");
scanf("%d",&n);
for(i=0;i<=n;i++){
    sum+=i;
    
}
printf("the sum of first %d numbers is %d",n,sum);
   return 0;
}
