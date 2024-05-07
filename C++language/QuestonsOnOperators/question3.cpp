#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter a number : ";
        cin>>n;
        int pdt = 1;
        while(n!=0){
            int ld = n%10;
            n /=10;
            pdt *= ld;
        }
        cout<<pdt;
    }