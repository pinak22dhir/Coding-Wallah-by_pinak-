#include<iostream>
#include<vector>

using namespace std;
// void bubblesort(vector<int> &v){
//     //nelements-->n-1 passses --> 50 40 30 20 10
// for(int i=0;i<v.size()-1;i++){
//     for(int j=i+1;j<v.size()-1-i;j++){
// if(v[j]>v[j+1]){//20 10 --> 10 20 
// swap(v[j],v[j+1]);
// }
//     }
// }
// return;
// }

//here is 2nd code for optimization 
 void bubblesort(vector<int> &v){
for(int i=0;i<v.size()-1;i++){
    //we dont have to cancel i passes it will move from 
    // total 4 passes
    //in j loop we have to cancel 4 passes to pass which are important 
    //then setting the value  of bool flag
    bool flag=false;
    for(int j=i+1;j<v.size()-1-i;j++){
if(v[j]>v[j+1]){
flag=true;
swap(v[j],v[j+1]);

}
//10 20 50 30 60 
    }
    if (!flag) break;

}
return;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
  bubblesort(v);
     for(int i=0;i<n;i++){
        cout<<v[i];
    }

}
//50 40 30 20 10 worst case 
//4 swaps 3 swaps  2swap 1 swap 
//time complexity 
//n-1 +n-2 + .... +1 =sum from 1 to n-1
//n(n-1)/2 max space 
//time complexity =o(n2)
//space complexity==o(1) in one array 
//stable does not disturb the order of elements with same value
//how to optimize it  
