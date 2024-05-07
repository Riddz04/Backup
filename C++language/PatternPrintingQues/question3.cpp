#include<iostream>//solid square
using namespace std;
    int main(){
        int n;
        cout<<"enter the no of columns: ";
        cin>>n;
        for(int i=1;i<=n;i++){//no. of rows
            for(int j=1;j<=n;j++){//no. of columns
                cout<<"* ";
            }
            cout<<endl;//this is nested loops
        }
    }