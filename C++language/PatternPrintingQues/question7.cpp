#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"enter a number :  ";
        cin>>n;
         for(int i=1;i<=n;i++){
            if(i%2==0){
                for(int j=1;j<=i;j++){
                    cout<<(char)(j+64)<<" ";
                }
            }
            else{
                for(int j=1;j<=i;j++){
                    cout<<j<<" ";
                }
            }
                cout<<endl;
            }
    }