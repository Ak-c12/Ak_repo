#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int sum =0;
    for(int i=1;i<=n; i++){
        sum+=i;
    }
    
    
    // using for while loop
    int n,i=1,sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    while(i<=n){
       sum+=i;
       i++;
    }

    cout<<"Sum="<<sum<<endl;
    return 0;
}