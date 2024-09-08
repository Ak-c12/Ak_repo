#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter rows:";
    cin>>r;
    cout<<"Enter col:";
    cin>>c;
    // Outer loop tells in which line you are present..(say 'i')
    // Inner loop tells what to do in that particular line..(say 'j')
    for(int i=1; i<=r; i++){
        // used when input is not taken from the user..
        // int c;
        // cout<<"Enter col:";
        // cin>>c; 
        for(int j=1; j<=c; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

