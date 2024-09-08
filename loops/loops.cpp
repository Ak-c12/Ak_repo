#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    int oddSum=0;
    cout<<"Enter the num:";
    cin>>n;

    // printing the sum of odd num b/w 1 to n..

    for(int i=1;i<=n;i++){
        if(i%2 !=0){
            oddSum+=i;
        }
    }
    
    cout<<oddSum<<endl;
    return 0;
}