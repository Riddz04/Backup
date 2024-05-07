#include<iostream>
using namespace std;
    int main(){
        int x = 3,y,z;
        y=x=10;//= operator mein right to left chlta hai
        z=x<10;// x<10 pehle and 10<10 is false and false=0 isliye z=0(true =1)
        cout<<x<<" "<<y<<" "<<z;
    }