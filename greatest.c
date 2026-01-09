//take 3 positive input and print the greatest of them
#include <stdio.h>

int main() {
    int a ;
    int b ;
    int c ;
    printf("enter 3 positive integer a,b and c :",a,b,c);
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is greatest");
    }
    if(b>a && b>c){
        printf("b is greatest");
    }
   if(c>a && c>b){
       printf("c is greatest");
   }

    return 0;
}
