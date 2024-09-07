#include <iostream>
using namespace std;

double power(double num,int pr=2){
    double a;
    a=1;
    for(int i=1; i<=pr; i++)
    a*=num;
    return a;
}
int main(){
    double n,result;
    int p;
    cout<<"Enter the num: \n";
    cin>>n;
    cout<<"Enter power: \n";
    cin>>p;
    result = power(n,p);
    cout<<"Answer:"<<result<< endl;
    result =power(n);
    cout<<"Square of the num:"<< result;
    
    return 0;
}