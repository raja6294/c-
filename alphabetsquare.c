#include<stdio.h>
// print A B C D
     //  A B C D       ASCII value of A is 65,B- 66, C- 67
     //  A B C D
     //  A B C D
int main(){
    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a =1;
        for(int  j=1;j<=n;j++){
            int d = a+64;        // d=65
            char ch= (char)d;    // ch=(char)65 -> ch = 'A'
            printf("%c ",ch);    // we have to transform acaii value to main value.
            a++;
        }
        printf("\n");
    }

     

    return 0;
}