//A-->b
#include<iostream>
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

    }
};
int main(){
    Child c;
    return 0;
}