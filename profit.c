//if cost price and selling price of an item is input through the keybord , write a pogram to determine whether the seller has made profit or loss. also determine how much profit he made or loss he incurred
#include <stdio.h>
int main() {
    int cp;
    int sp;
    int profit;
    
    printf("enter cp:");
    scanf("%d",&cp);
    printf("enter sp:");
    scanf("%d",&sp);
    
    if(sp-cp>0){
        printf("profit\n");
    }
    else if( sp-cp<0){
        printf("loss\n");
    }
    profit=sp-cp;
    printf("profit is %d",profit);
    
    
    
    
    
    return 0;
}

