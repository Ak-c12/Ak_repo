#include<iostream>
using namespace std;
int main(){
    // for loop..
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int sum =0;
    for(int i=1;i<=n; i++){
        sum+=i;
    }
    // using break keyword..
    int n=20;
    int sum =0;
    for(int i=1;i<=n; i++){
        sum+=i;
        if(i==5){
            break;
        }
    }
     
    
    // using while loop..
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