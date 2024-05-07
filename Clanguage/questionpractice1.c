#include<stdio.h>
    int main(){
        int a,b;
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        int q = a / b;
        int r = a - (b * q);
        printf("The value of remainder is :%d",r);
        return 0;
    }