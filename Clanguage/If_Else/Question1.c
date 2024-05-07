#include<stdio.h>
    int main(){
        int l;
        printf("Enter the value of side l:");
        scanf("%d",&l);
        int b;
        printf("Enter the value of side b:");
        scanf("%d",&b);
        int a = l * b;
        int p = 2 * (l + b);
        if(a > p){
            printf("Area is greater than Perimeter");
        }
        else{
            printf("Area is not greater than Perimeter");
        }
        return 0;
    }
    