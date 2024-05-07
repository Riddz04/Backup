#include<stdio.h>
    int main(){
        int a ,b ,c;
        printf("Enter the age of Ram :");
        scanf("%d",&a);
        printf("Enter the age of Shyam :");
        scanf("%d",&b);
        printf("Enter the age of Ajay :");
        scanf("%d",&c);
        if(a>b){
            if(a>c){
                printf("Ram is the eldest");
            }
            else{
                printf("Ajay is the eldest");
            }
        }
        else{
            if(b>c){
                printf("Shyam is the eldest");
            }
            else{
                printf("Ajay is the eldest");
            }
        }
        return 0;
    }