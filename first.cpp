#include<iostream>
using namespace std;
int main(){
    char  ch= 'a';
    int age= ch;
    cout<< sizeof(age)<< endl;

    int age;
    cout<<"Enter the age:";
    cin>>age;
    cout<<"Your age is ="<<age<<endl;

    // WAP for addition of two numbers
    
    int a,b;
    cout<<"Enter a:";
    cin>> a;
    cout<<"Enter b:";
    cin>> b;
    int sum = a+b;
    cout<<"Sum is = "<< sum << endl;
    
    // program to show given num is even or odd

    int n;
    cout<<"Enter Number:";
    cin>> n;

    if(n%2==0){
        cout<<"Even num"<<endl;
    }else{
        cout<<"odd num \n";
    }

    return 0;
}
