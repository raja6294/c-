//take 3 numbers input and tell if they can be the sides of a triangle.
#include <stdio.h>

int main() {
    int a ;
    int b; 
    int c;
    int sum;
    printf("enter first side of triangle a:",a);
    scanf("%d",&a);
    printf("enter second side of triangle b:",b);
    scanf("%d",&b);
     printf("enter third side of triangle c:",c);
    scanf("%d",&c);
    sum=a+b;
    
    if(sum>c){
        printf("triangle is possible");
    }
    else{
        printf(" triangle not possible");
    }

    return 0;
}
