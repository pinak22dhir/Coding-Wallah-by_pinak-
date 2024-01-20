#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=(arr+2);
    cout<<*ptr<<"\n";
   cout<< *ptr++<<"\n";//after one step change // post
    cout<<*ptr<<"\n";
    cout<<*ptr--<<"\n";
    cout<<*ptr<<"\n";
     cout<<--(*ptr)<<"\n";//directly on the spot change it
    cout<<*ptr<<"\n";
    cout<<++(*ptr)<<"\n";//pre
    cout<<*ptr<<"\n";
    return 0;
}