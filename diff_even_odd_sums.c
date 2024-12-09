#include <stdio.h>
#include<stdlib.h>

int main() {
int i,n,esum=0,osum=0;
printf("enter n value");
scanf("%d",&n);
for(i=0;i<=n;i++){
    if(i%2==0)
{    esum+=i;
    
}
else{
    osum+=i;
}}
printf("the sum of first %deven numbers is %d\n",n,esum);
printf("the sum of first %dodd numbers is %d\n",n,osum);
printf("the difference b/w even and odd numbers is %d\n",abs(esum-osum));
   return 0;
}
