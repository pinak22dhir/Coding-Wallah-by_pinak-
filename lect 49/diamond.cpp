#include<iostream>
//a->b>c 
using namespace std;
class Parent{
    public:
    Parent(){
cout<<"parent1"<<endl;
    }
};

class Child1: public Parent{
    public:
    Child1(){//it is in capital
    cout<<"child1 class"<<endl;//parent

    }};
    class Child2: public Parent{
    public:
    Child2(){//it is in capital
    cout<<"Child2 class"<<endl;//parent

    }
};
 class GrandChild: public Child1,Child2{
    public:
   GrandChild(){//it is in capital
    cout<<"Child2 class"<<endl;//parent

    }
};
int main(){
GrandChild c;
    return 0;
}