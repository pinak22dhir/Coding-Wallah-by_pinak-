#include<iostream>
using namespace std;
//in c we use printf and in  cpp we use cout
int main(){ 
    int arr[]={1,1,2,2,9};
//concept : mark the duplicate things one and then which are non zero do print that 
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
          arr[i]=arr[j]=-1;}}
    }for(int i=0;i<5;i++){
        if(arr[i]!=-1){
    cout<<arr[i]<<endl;
        }
    }
    return 0;
}
