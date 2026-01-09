#include <stdio.h>
int main(){
      int a,b,c;
    int n;
    int sum;
    printf("enter a number :");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    
    c=n/10;
    sum=a+b+c;
    printf("sum of 3 digits %d",sum);
  
   
    return 0;
}

