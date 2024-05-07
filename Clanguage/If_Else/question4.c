#include<stdio.h>
    int main(){
        int a;
        printf("Enter the value of side a :");
        scanf("%d",&a);
        int b;
        printf("Enter the value of side b :");
        scanf("%d",&b);
        int c;
        printf("Enter the value of side c :");
        scanf("%d",&c);
        if((a+b)>c && (b+c)>a && (a+c)>b){
            printf("It is a triangle");
        }
        else{
            printf("It is not a triangle");
        }
        return 0;
    }
