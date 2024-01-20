#include <iostream>
#include <algorithm>
using namespace std;
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int x=10;
    int y=100;
    swap(x,y);//call for references
    cout<<x<<" "<<y;
}
// int swap(int &x,int &y){
//    int temp;
//   temp=&x;


// }