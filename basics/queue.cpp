#include<iostream>
#include<queue>
using namespace std;

// class queue{

// };

// int main(){

//     queue<int> q;
//     q.push(2);
//     q.push(20);
//     q.push(23);

//     cout<<"Size of queue is : " <<q.size()<<endl;

//     q.pop();
//     cout<<"Size of queue is : " <<q.size()<<endl;


//     return 0;
// }

//funtion overloading
// class data
// {
//     public:

//     void func(int a , int b){
//         cout<<(a+b)<<endl;
//     }
//     void func(double a , double b){
//         cout<<(a+b)<<endl;
//     }
//     void func(char a , char b){
//         cout<<"First char="<<a<<"\n"<<"Second char="<<b<<endl;
//     }
// };
// int main(){
//     data d1;
//     d1.func('a', 'b');
//     return 0;
// }

// Operator Unary overloading
class data{
    public:
    int num1;
    data(int n){
        this->num1 =n;
    }
    void operator+(){
        num1++;
    }
    void display(){
        cout<<"value is:"<<num1<<endl;
    }
};
int main(){
    data t1(10);
    +t1;
    t1.display();
    return 0;
}