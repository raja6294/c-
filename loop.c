//print the table of n
#include <stdio.h>
int main (){
   int n;
   int i;
  
   printf("enter the value of n: ");
   scanf("%d",&n);
   
    
    for(  i=n;i<=(n*10);i=i+n){
     
           printf("%d\n",i);
       
    }
   
    return 0;
}