//check prime or not
#include <stdio.h>

int main() {
    int n;
    int i;
    printf("enter a number:");
    scanf("%d",&n);
    int a=0;
    for(i=2;i<=n-1;i++) {
        if(n%i==0){
            a=1;
            break;
        }
    }
       if(n==1) printf("1 is nither prime nor composite");
       else if(a==0)
            printf("the number is prime\n");
            
        
        else  
                printf("the number is not prime\n");
            
        
      return 0;  
    }