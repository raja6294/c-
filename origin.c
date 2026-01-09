//given a point (x,y),write a program to find out if it lies on the x axis, y axisor at the origin,
#include <stdio.h>
int main(){
 int x,y;
 printf("enter the value of x : ");
 scanf("%d",&x);
  printf("enter the value of y: ");
  scanf("%d",&y);

  if(x==0 && y==0){
    printf("at the origin");

  }
else if(x==0){
 printf("at the y axis");

}
else if ( y==0){
    printf("at the x axis");
}
else if ( x!=0 && y!=0 ) {
    printf("not lies on x or y");
}
return 0;
}