#include<iostream>
using namespace std;
int main(){

    int n;
    char ch='A';
    int num=1;
    cout<<"Enter n: ";
    cin>>n;

    // Triangle pattern in *..
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Triangle pattern in Numbers..
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }

    // Another pattern in num..
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }

    //Triangle pattern for ch..
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<ch;
        }
        cout<<endl;
    }


    // Num pattern in reverse order..
    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

   
    //Floyd's triangle pattern for num..
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
    //Floyd's triangle pattern for ch..
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    // Inverted triangle pattern..
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
                cout<<(i+1);
        }
        cout<<endl;
    }

     // Inverted pyramid pattern..
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
                cout<<(i+1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}