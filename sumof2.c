#include<stdio.h>
#include<math.h>
int add(int x,int y){   //the value of a and b stored in int x and int y

   
return x+y;
}

int main(){
int a;
printf("enter a: ");
scanf("%d",&a);
int b;
printf("enter b: ");
scanf("%d",&b);

int sum =add(a,b); //pass by value
printf("%d",&sum);
return 0;
}