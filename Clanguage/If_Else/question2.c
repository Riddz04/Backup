#include<stdio.h>
    int main(){
        int x;
        printf("Enter a number :");
        scanf("%d",&x);
        if(x % 5 == 0 || x % 3 == 0){
            printf("This number is divisible by 5 or 3");
        }
        else{
            printf("This number is not divisible by 5 or 3");
        }
        return 0;
    }