#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

int *ptrx=&x;
int *ptry=&y;
int result;
int *ptr_result=&result;//in value you have to pass the address 
//address helps not to make copy of variable and di changes in that--> important concept (call by reference)
//* value --> & address 
*ptr_result=*ptrx+*ptry;
cout<<result<<" "<<*ptrx<<" "<<*ptry;
return 0;


}