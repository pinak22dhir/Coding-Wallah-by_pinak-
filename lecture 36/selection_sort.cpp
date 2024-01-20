#include<iostream>
#include<vector>

using namespace std;
void Selectionsort(vector<int> &v){
   //n elements--> n-1 
for(int i=0;i<v.size()-1;i++){
    // int min=v[i]; we dont take elements but talk in form of index
    int min=i;
    //in j loop it will start from i+1 to till end of loop
    for(int j=i+1;j<v.size();j++){
if(v[j]>v[min]){
min=j;
}}
//as i will also increase its index through each pass
////then place min index  

if(i!=min){
swap(v[i],v[min]);
    }}

return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
  Selectionsort(v);
     for(int i=0;i<n;i++){
        cout<<v[i];
    }cout<<endl;

return 0;}
//i=0-->j=1to n-1-->n-1 insert
//i=1 j=2 to n-1-->n-2 inset
//i=n-2 j=n-1 to n-1 -->1 insert 
//n-1 + n-2 +n-3 +......+2+1
//sum of elements 1 to n-1 =n(n-1)/2
//tc=O(n*2) 
//space complexity=o(1) as we make changes in this array
//selection sort is  also stable --> order of elements with same value are not disturbed
// void selection2sort(vector<int> &v){
//     for(int i=0;i<v.size()-1;i++){
//         int min=i;
//         for(int j=i+1;j<v.size();j++){
//             if(v[j]>v[min]){
//             min=j;
//             }
//         }
//         if(i!=min){
//             swap(v[i],v[min]);
//         }
//     }
// }