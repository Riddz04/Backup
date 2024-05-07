#include<stdio.h>
    int main(){
        int cp;
        printf("Enter the value of Cost Price : ");
        scanf("%d",&cp);
        int sp;
        printf("Enter the value of Selling Price : ");
        scanf("%d",&sp);
        if(sp > cp){
            printf("Profit");
        }
        else if(cp > sp){
            printf("Loss");
        }
        else{
            printf("No Profit No Loss");
        }
        return 0;
    }