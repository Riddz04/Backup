#include<iostream>
using namespace std;
    int main(){
        for(char ch='A';ch<='Z';ch++){
            cout<<"ASCII value of"<<ch<<":"<<int(ch)<<endl; 
        }
        for(char ch='a';ch<='z';ch++){
            cout<<"ASCII value of"<<ch<<":"<<int(ch)<<endl;
        }
    }