#include<stdio.h>
int main(){
    int l;
    int b;
    printf("enter the length of rectangle: ");
    scanf("%d",&l);
    printf("enter the breadth of rectangle: ");
    scanf("%d",&b);
    printf("the perimeter of rectanggle is %d\n",2*(l+b));
     printf("the area of rectangle is %d",l*b);

    return 0;
}