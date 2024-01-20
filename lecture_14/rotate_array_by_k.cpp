#include<iostream>
using namespace std;
int main(){
    
    // int arr[];
    // int n;
    // cin>>n; wrong syntax firstly we want to declare it rather than use it 
      int n;
    cin>>n;
    //  int arr[]; we cannot use it as in compile time we have to give size at compile time 
    //dynamically use error or vector 
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int k;
    cin>>k;
 
    // k=k-n; you can use too if n is greater than k 
       k=k%n;//implementation
return 0;
}