#include<iostream>//star triangle ulta
using namespace std;
    int main(){
        int n;
        cout<<"enter a number: ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=(n-i+1);j++){
                // cout<<"* ";//this is star
                // cout<<j<<" ";//this is no.
                // cout<<(char)(j+64)<<" ";//this is alphabet
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }