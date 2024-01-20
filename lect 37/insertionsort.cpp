#include<iostream>
#include<vector>

using namespace std;
void Insertionsort(vector<int> &v){
   
for(int i=0;i<v.size()-1;i++){
   
    int curr_ele=v[i];
  for(int j=i+1;j<v.size();j++){
if(v[j]>v[]){
min=j;
}}


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
  Insertionsort(v);
     for(int i=0;i<n;i++){
        cout<<v[i];
    }cout<<endl;

return 0;}