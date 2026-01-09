#include <stdio.h>
//print ****
//      ***
//      **
//      *
  int main() {
    int n,j;
    printf("enter no of rows: ");
    scanf("%d",&n);
   
    int a = n;     //karon first line e star er number = row er number(n)

    for (int i=1;i<=n;i++){
        

        for (int j=1;j<=a;j++){            //j-> 1 to a
            printf("* ");
        }
        a--;
        printf("\n");
    }


















    return 0;
  }