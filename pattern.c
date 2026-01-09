#include <stdio.h>
int main(){
    int n,m;
    printf("enter no of rows :");
    scanf("%d",&n);
    printf("enter no of columns: ");
    scanf("%d",&m);

    for(int i=1;i<=n;i++){           //outer loop-> no of lines

        for(int j=1;j<=n-i;j++){      //inner loop->no of stars in each line
            printf(" ");
        }
        for (int k=1;(k<=2*i-1);k++){
            printf("*");
        }
        printf("\n");           // porer line e jaoar jonno
        
    }


          //no of lines = no of rows
          //no of stars in each line = no of columns
  






    return 0;
}