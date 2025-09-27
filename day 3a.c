#include<stdio.h>
int main(){
    int c;
    int f;
    printf("enter the temperature in celsius ");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("the temperature in farehnite is %d",f);
    return 0;
}