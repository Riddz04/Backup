#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"Enter a number : ";
        cin>>n;
        int r = 0;
        while(n!=0){
            int ld = n%10;
            r *=10;
            r +=ld;
            n /=10;
        }
            cout<<"The reverse of the number is : "<<r<<endl;
        int sum = 0;
        while(n!=0){
            int ld = n%10;
            n /=10; // n=n/10
            sum += ld; //sum + ld
        }
            cout<<"The sum of the digits of the number is : "<<sum;// sum code is wrong, problem mark
    }