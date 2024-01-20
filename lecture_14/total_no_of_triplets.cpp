#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,8,9};
    int targetsum=4;
    int triplets=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
            if(arr[i]+arr[j]+arr[k]==targetsum){
              triplets++;
            }
        }
    }}
    cout<<triplets<<endl;
    return 0;
}
