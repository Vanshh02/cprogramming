#include<stdio.h>
void main(){
    float r;
    printf("enter the radius ");
    scanf("%f",&r);
    float area1,perimeter1;
    area1= 3.14*r*r;
    perimeter1=2*3.14*r;
    printf("area of circle=%2f\n",area1);
    printf("perimeter of circle=%2f\n",perimeter1);
    float l,b;
    printf("enter the length and breadth of rectangle");
    scanf("%f%f",&l,&b);
    float area2,perimeter2;
    area2=l*b;
    perimeter2=2*l+2*b;
    printf("area of rectangle=%2f\n",area2);
    printf("perimeter of rectangle=%2f\n",perimeter2);
    float a;
    printf("enter the length of side");
    scanf("%f",&a);
    float area3,perimeter3;
    area3=a*a;
    perimeter3=4*a;
    printf("area of square = %2f\n",area3);
    printf("perimeter of square =%2f\n",perimeter3);
    return 0;
}

