#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the value of first number is %d\n",a);
    printf("the value of second number is %d",b);
    return 0;
}