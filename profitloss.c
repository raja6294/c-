//if cost price and selling priceof an item is input through the keybord , write a pogram to determine whether the seller has made profit or loss. also determine how much profit he made or loss he incurred
#include <stdio.h>
int main() {
    float cp;
    float sp;
    float profit;
    
    printf("enter cp:");
    scanf("%f",&cp);
    printf("enter sp:");
    scanf("%f",&sp);
    
    if(sp-cp>0){
        printf("profit\n");
    }
    if  (sp-cp<0){
        printf("loss\n");
    }
    if (sp-cp==0){
        printf("no profit, no loss\n");
    }
    profit=sp-cp;
    printf("profit is %f",profit);
    
    
    
    
    
    return 0;
}
