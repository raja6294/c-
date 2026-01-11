#include <stdio.h>
int sum(int *a,int *b , int *r){
    *r=*a+*b;
    printf("the result is %d",*r);
   // return *r;
}

int main() {
   int a,b,r;
   printf("enter two number : ");
   scanf("%d %d",&a,&b);
   sum(&a,&b,&r);
    return 0;
}