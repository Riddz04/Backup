#include<iostream>
using namespace std;
    int main(){
        // int a;
        // cout<<"Enter the value of a : ";
        // cin>>a;
        // int d;
        // cout<<"Enter the value of d : ";
        // cin>>d;
        // int n;
        // cout<<"Enter the value of n : ";
        // cin>>n;
        // int an = a + (n-1)*d;
        // for(int i=a;i<=an;i=i+d){
        //     cout<<i<<" ";
        // }
        int a;
        cout<<"Enter the value of a :";
        cin>>a;
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<a<<" ";
            a=a * 2;
        }


    }