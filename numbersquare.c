//print the given str: 1234
                    // 1234
                    // 1234
                    // 1234
#include <stdio.h>
int main(){
    int n,m;
    printf("enter the no of rows: ");
    scanf("%d",&n);
   // printf("enter the no of columns:");
   // scanf("%d",&m);

    for(int i=1; i<=n;i++){           //no of rows-> i variabe
        
        for(int j=1;j<=n;j++){       //no of columns-> j variable
            printf(" %d ",j);
        }
        printf("\n");
    }





return 0;


}