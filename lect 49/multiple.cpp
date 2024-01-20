#include<iostream>
//a- -b
   //  c-
using namespace std;
class Parent1{
    public:
    Parent1(){
cout<<"parent"<<endl;
    }
};
class Parent2{
    public:
    Parent2(){
cout<<"parent2 class"<<endl;
    }
};
class Child: public Parent1,public  Parent2{
    public:
    Child(){//it is in capital
    cout<<"child class"<<endl;//parent

    }};
    class Grandchild: public Child{
    public:
   Grandchild(){//it is in capital
    cout<<"grandchild class"<<endl;//parent

    }
};
int main(){
Child c;
    return 0;
}