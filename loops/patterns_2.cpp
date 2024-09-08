#include<iostream>
using namespace std;
int main(){
    int n;
    int num=1;
    char ch='A';
    cout<<"Enter num:";
    cin>>n;
    // Square Pattern in 1234..
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<< j<< " ";
        }
        cout<<endl;
    }

    // Square patterns in *..
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Square patterns for characters like ABCD..
    for(int i=1; i<=n; i++){ //outer 
        char ch = 'A';
        for(int j=1; j<=n; j++){ //inner start => line start
            cout<<ch<< " ";
            ch= ch+1;
        }
        cout<<endl;
    }

    // Another pattern.. 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    // Pattern no. 5
    for(int i=1; i<=n; i++){ //outer 
        for(int j=1; j<=n; j++){ //inner start => line start
            cout<<ch<<" ";
            // ch= ch+1;
            ch++;
        }
        cout<<endl;
    }



    return 0;
}