#include<stdio.h>
    int main(){
        float x;
        scanf("%f",&x);
        int y = x;
        printf("%d\n",y);
        float z = x - y;
        printf("%f",z);
        return 0;
    }