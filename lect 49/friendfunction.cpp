#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(int y){
        x=y;
    }
    friend void print( A &obj);
};
void print(A &obj){
    cout<<obj.x<<endl;
}
int main(){
    A obj(5);
    print(obj);
    // cout<<obj.x<<endl;
}