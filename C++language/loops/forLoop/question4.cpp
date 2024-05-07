#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter the value of n: ";
        cin>>n;
        for(int i=n/2;i>=1;i--){//reverse loop 
            if(n%i==0){
                cout<<i<<" ";
                break;//to get out of loop
            }

        }
    
    }