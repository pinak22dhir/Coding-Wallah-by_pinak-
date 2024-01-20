#include<iostream>
using namespace std;
int main(){
//     int x=20;
//     int y=9.8;
//     int *ptr=&x;
//     cout<<"size of x is"<<sizeof(x)
//     //size of int is 4, char is 1, float =8
// <<endl;
//  cout<<"size of x is"<<sizeof(x)<<endl;
//ptr will store address
// cout<<*ptr<<" "<<(*ptr+1);
int arr[2]={1,2};
int *ptr=&arr[0];
// cout<<(ptr+1)<<" "<<*(ptr+1)<<"\n";
cout<<ptr<<" "<<*ptr<<"\n";
// cout<<*ptr++; post it will remain same
// cout<<++(*ptr); pre it will change on the spot 
cout<<" "<<*ptr<<endl;
    return 0;
}