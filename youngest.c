//if the ages of ram, shyam and ajay are input through the keyboard , erite a pogram to determine the youngest of the three.
#include <stdio.h>
int main() {
    int r;
    int s;
    int a;
    printf("the age of ram:");
    scanf("%d",&r);
    
    printf("enter the age of shaym");
    scanf("%d",&s);
    
    printf("enter the age of ajay:");
    scanf("%d",&a);
    
    if(r<s){ // now s is out of race
        if(r<a)
            printf(" ram is youngest ",r);
            else //a<r
            printf("ajay is youngest ",a);
                
            
        
    }
    else{ //s<r
        if(s<a)
           printf("shaym is youngest",s);
           else //a>s
           printf("ajay is youngest",s);
        
    }
    

    return 0;
}
