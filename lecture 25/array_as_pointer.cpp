#include<iostream>
using namespace std;
void process(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<"\n";
    }
}
int main(){
    int arr[3]={1,2,3};
    process(arr, 3);
    return 0;
}