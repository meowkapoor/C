//     MY ATTEMPT:
//     int num1, num2, num3;
//     cout<<"Enter three numbers:";
//     cin>>num1;
//     cin>>num2;
//     cin>>num3;
//     if(num1>num2) {
//         if(num1>num3) {
//             cout<<"Largest number of the three is "<<num1;
//         } else {
//             cout<<"Largest number of the three is "<<num3;
//         } 
//     }     else if(num2>num1) {
//             if(num2>num3) {
//                 cout<<"Largest number of the three is "<<num2;
//             }
//             else {
//                 cout<<"Largest number of the three is "<<num3;
//             }
        
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter first number: ";
cin>> a;
cout<<"\nEnter second number: ";
cin>> b;
cout<<"\nEnter third number: ";
cin>>c;
if (a>b){
    if (a>c){
        cout<<a<<" is the lasgest number.";}
    else{
        cout<<c<<" is the largest number.";}
    }
else{
    if (b>c){
        cout<<b<<" is the largest number.";}
    else
        cout<<c<<" is the largest number.";}
    return 0;
    }