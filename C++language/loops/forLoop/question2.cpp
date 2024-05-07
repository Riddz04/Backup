#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"enter the value of n"<<endl;
        cin>>n;
        for(int i=n;i<=(n*10);i=i+n){
            cout<<i<<" ";
        }
    }