#include<iostream>
using namespace std;
int a , b;
int sum;
int sub;
int mul;
int divi;
int mod;
int main(){
    cout<<"Silent Chora";
    cin>>a>>b;
    sum = a+b;
    sub = a-b;
    mul = a*b;
    divi = a/b;
    mod=a%b;

    cout<<"a + b = "<<sum;
    cout<<"a - b = "<<sub; 
    cout<<"a * b = "<<mul;
    cout<<"a / b = "<<divi;
    cout<<"a % b = "<<mod ;
    return 0;
}
