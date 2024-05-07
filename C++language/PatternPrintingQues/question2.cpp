#include<iostream>
using namespace std;
    int main(){
        int m;
        cout<<"enter the no. of rows: ";
        cin>>m;
        int n;
        cout<<"enter the no of columns: ";
        cin>>n;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cout<<"* ";
            }
            cout<<endl;//this is nested loops
        }
    }