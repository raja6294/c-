//take a positive input and tell if t is divisible by 5 and 3
#include<stdio.h>
int main(){
    int n ;
    printf("enter a positive input :");
    scanf("%d",&n);
    if (n%5 == 0 && n%3 ==0){
        printf("divisible by both");
    }
    else{
        printf("not divisible by both");
    }
    
   
    return 0;
    
    
}

