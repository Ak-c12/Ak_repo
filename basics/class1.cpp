#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Value of A and B is:"<< endl;
  cin>>a>>b;
  if(a>b){
    cout<<"A is large"<< endl;
  }
  else if(a<b){
    cout<<"B is large"<< endl;
  }
  else{
    cout<< "A and B are equal"<< endl;
  }
  
}
