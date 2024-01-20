#include<iostream>
using namespace std;
class Parent{
    public:
    //importance of using virtual keyword
  virtual  void print(){
        cout<<"parent class"<<endl;
    }
    void show(){
        cout<<"parent class"<<endl;
    }
};
class Child: public Parent{
    public:
    void print(){
        cout<<"child class"<<endl;
    }
    void show(){
        cout<<"child class"<<endl;
    }
};
int main(){
    Parent *p;
    Child c;
    p=&c;
    p->print();
    p->show();
}