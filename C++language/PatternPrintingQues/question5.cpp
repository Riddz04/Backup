#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"enter a number: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                // cout<<(char)(j+64)<<" ";//typecasting this is for ABC
                // cout<<(char)(i+64)<<" ";//this is for ABC in diff pattern
                // cout<<(char)(j+96)<<" ";//this is for abc
                cout<<(char)(i+96)<<" ";//this is for abc in diff pattern
            }
            cout<<endl;
        }
    }