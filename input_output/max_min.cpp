#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    if (n1>n2){
        cout<<"maximum of the two is: "<<n1;
        cout<<"\n and minimum is: "<<n2;
    }
    else{
        cout<<"maximum of the two is: "<<n2;
        cout<<"\nand minimum is: "<<n1;
    }
}