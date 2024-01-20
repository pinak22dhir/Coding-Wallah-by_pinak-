#include<iostream>
//a->b>c 
using namespace std;
class Parent{
    public:
    Parent(){
cout<<"parent"<<endl;
    }
};
class Child: public Parent{
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
  Grandchild c;
    return 0;
}