#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    // vector<int> v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }  this is corrected version for input 

    // vector<int> v(n);
    // for (int i=0;i <n;i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    //     } this will show error 
     vector<int> v;
    for (int i=0;i <n;i++){
        int element;
        cin>>element;
        v.push_back(element);
        } 
    for (int i=0;i <n;i++){
       cout<<v[i]<<" ";  
    }
    const int N=1e5+10;
    vector<int>freq(N,0);
for(int i=0;i<n;i++){
    //you can use it freq[v[i]++]too
    //you will increase frequency of each element
    ++freq[v[i]];
}
    int q;
    cin>>q;
    if(q--){
        int element;
        cin>>element;cout<<freq[element]<<endl;
    }
    return 0;
}
