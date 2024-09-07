#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    //program for printing no. serial wise
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }
    
    //program for printing the sum of numbers
    int i=1;
    int sum=0;
    while(i<=n){
        n%2==0;
        sum=sum+i;
        i=i+1;
        //cout<<"value of sum is"<<sum<<endl;
    }
    cout<<"value of sum is : "<<sum<<endl;
    return 0;
}