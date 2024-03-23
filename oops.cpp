#include<iostream>
using namespace std;
class Myclass{
    public:
    int a;
    int b;
    void myFunction(){
        cout<<"Hello world";
    }
    void calculator(){
        cout<<" "<<a*b;
    }
};

int main(){
    Myclass obj;
    obj.a=10;
    obj.b=200;
    cout<<"My number is "<<obj.a<<endl;
    cout<<"My second number is "<<obj.b<<endl;
    obj.myFunction();
    obj.calculator();
    return  0;
}