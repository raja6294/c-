//display this AP 1,3,5,7,9.. upto n terms
//a=1,d=2   a n'th = a+(n-1)d = 1+2n-2 = 2n-1

#include <stdio.h>
int main (){
  int n;
  int i;
  printf("enter a number: ");
  scanf("%d",&n);
  for(i=1;i<=2*n-1;i=i+2){
      printf("%d\n",i);
  }
    return 0;

}