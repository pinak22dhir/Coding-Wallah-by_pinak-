// fro a to b and c
#include<iostream>
//a->b>c 
using namespace std;
class Parent1{
    public:
    Parent1(){
cout<<"parent1"<<endl;
    }
};
class Parent2{
    public:
    Parent2(){
cout<<"parent2"<<endl;
    }
};
class Child1: public Parent1{
    public:
    Child1(){//it is in capital
    cout<<"child1 class"<<endl;//parent

    }};
    class Child2: public Parent2{
    public:
    Child2(){//it is in capital
    cout<<"Child2 class"<<endl;//parent

    }
};
int main(){
Child1 c;
    return 0;
}