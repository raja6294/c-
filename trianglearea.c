#include<stdio.h>
#include<math.h>

float calculatearea(float b, float h){

return 0.5*b*h;
}
int main(){
    float b,h;

    printf("enter base: ");
    scanf("%f",&b);
    printf("enter hight: ");
    scanf("%f",&h);
    float area=calculatearea(b,h);
    printf("the area is %f",area);
     return 0;
}