#include<stdio.h>
#include<math.h>
void main(){
float x1,y1,x2,y2;
printf("enter the value of x1 and x2 :");
scanf("%f%f",&x1,&x2);
printf("enter the vaue of y1 and y2 :");
scanf("%f%f",&y1,&y2);
float distance=sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
printf("distance between the given point:%f",distance);
}