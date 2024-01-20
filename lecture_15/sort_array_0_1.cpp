#include<iostream>
#include<vector>
using namespace std;
// //when you void in function then dont return value and in main you can call it as is but in case of int you have to put value in a variable and then call it in main function
// void sortzeroesandones(vector<int> &v){
// // just pass the address in vector as function 
 
// int zeros_count=0;
// //for vector we will use v.size();
// for(int i=0;i<v.size();i++){
//     if(v[i]==0){
//         zeros_count++;
//     }
// }
// for(int i=0;i<v.size();i++){
// if(i<zeros_count){
//     v[i]=0;
// }
// else{
//     v[i]=1;
// }
// }

// }
void sortzeroesandones(vector<int> &v){
//concept-->2 pointer just zeroes and ones and swap it
//left pointer and right pointer 
//left pointer is at  zero nd right pointe is at  last and then swap it 
int left_ptr=0;
int right_ptr=v.size()-1;
while (left_ptr<=right_ptr){
if(v[left_ptr==1]&& v[right_ptr==0]){
  swap(left_ptr,right_ptr);
    // left_ptr++;
    // right_ptr--;
}
if(v[left_ptr==0]){
    left_ptr++; 
}
if(v[right_ptr==1]){
    right_ptr--;
   
}
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
    sortzeroesandones(v);//2 pointer form 
     for(int i=0;i<n;i++){
        cout<<v[i];
    }

}
