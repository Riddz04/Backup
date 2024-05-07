#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter the value of n : ";
        cin>>n;
        bool flag=true; //true means prime and this is boolean
        for(int i=2; i<=n/2;i++){
            if(n%i==0){
                flag=false; //false is composite
                break;
            }
        }
        if(n==1) cout<<"Unique number";
        else if(flag==true) cout<<"Prime number";
        else cout<<"Composite number";
    }