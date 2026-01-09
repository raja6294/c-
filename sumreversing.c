// WAP TO PRINT the sum of given number and its reverse.
#include <stdio.h>
//wap to print the sum of given number and its reverse
// n=1234, r=4321,, we have to find sum(n+r) = ??
int main(){
    int n,temp,i,sum;
    printf("enter any number:");
    scanf("%d",&n);
    int r=0;
    temp=n;
    while(temp>0){
         r = r * 10 + (temp % 10);
         temp=temp/10;
         


    }
    printf("the reverse number is %d\n",r);
    sum=n+r;
    printf("the sum is %d",sum);
return 0;
}