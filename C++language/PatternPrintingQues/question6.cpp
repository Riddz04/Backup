#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"enter a  number : ";
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                // cout<<"* "; //this is a star tiangle
                cout<<j<<" ";//this is a no. triangle
                // cout<<(char)(j+64)<<" ";//this is an alphabet triangle
            }
            cout<<endl;
        }
    }