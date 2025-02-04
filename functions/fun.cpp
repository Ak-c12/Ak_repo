#include<iostream>
using namespace std;
//sum of two numbers
int sum(double a, double b){
    double sum= a+b;
    return sum;
}
//
int minNum(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    // cout<<"Sum is = "<<sum(10,14)<< endl;
    // cout<<minNum(24,10)<< endl;
    cout<<(10+24)<<endl;
    return 0;
}