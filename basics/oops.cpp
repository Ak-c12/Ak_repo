#include<iostream>
using namespace std;

// class Student{
//     private:
//     string name;
//     int age, roll_num, marks;
//     //
//     public:
//     void set_name(){
//         cout<<"Enter name: \n";
//         cin>>name;

//     }
//     void set_age(int a){
//         this->age=a;
//     }
//     void set_rollNum(int x){
//         this->roll_num=x;
//     }
//     void set_marks(int m){
//         this->marks=m;
//     }
//     void display(){
//         cout<<"Name:"<<name<<endl;
//         cout<<"Age is:"<<age<<endl;
//         cout<<"Roll Num:"<<roll_num<<endl;
//         cout<<"marks:"<<marks<<endl;
//     }

// };

// int main(){
//     Student s1;
//     s1.set_name();
//     s1.set_age(20);
//     s1.set_rollNum(205);
//     s1.set_marks(90);
//     s1.display();

//     return 0;
// }

class complex{
    int a,b;
    public:
    void setNum(int n1 , int n2){
        this->a=n1;
        this->b=n2; 
    }
    friend complex sumcomplex(complex a1, complex b1);
    void display(){
        cout<<"Your Number is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumcomplex( complex a1,complex b1){
    complex c1;
    c1.setNum((a1.a + b1.a),(a1.b+b1.b));
    return c1;
}
int main(){
    complex c1,c2 , sum;
    c1.setNum(2,4);
    c2.setNum(3,7);
    c1.display();
    c2.display();
    sum= sumcomplex(c1,c2);
    sum.display();
    
    return 0;
}
