#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
bool isomorphic(string str1,string str2){
    //power of index 0 2  3  freq ka matlab 
vector<int> v1(128,-1);//asscci value sbki -1 hai  agr toh equal hai nhi  toh update
vector<int> v2(128,-1);
if(str1.size()!=str2.size()){
return false;
}
for(int i=0;i<str1.size();i++)
{
    if(v1[str1[i]]!=v2[str2[i]]) return false;
    else{
    v1[str1[i]] =v2[str2[i]]=i; //update  
    }
}
    // for(int i=0;i<str1.size();i++){
//     if
//   (v1[str1[i]]!=v2[str2[i]])//ascii values ki indexes kya vlue
// {  //index pein rkhi value match hojaye
//   return false;//ek commom
// }
//     v1[str1[i]]=v2[str2[i]]=i;}//age same  current index hai i usse update
return true;
}

 int main()
{
string str1,str2;

cin>>str1>>str2;

cout<<isomorphic(str1,str2)<<endl;


return 0;
}
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cstring>
// #include<string>
// using namespace std;

// bool isomorphic(string str1, string str2) {
//     vector<int> v1(128, -1);
//     vector<int> v2(128, -1);

//     if (str1.size() != str2.size()) {
//         return false;
//     }

//     for (int i = 0; i < str1.size(); i++) {
//         // Check if the mapping is already established
//         if (v1[str1[i]] != -1 && v1[str1[i]] != str2[i]) {
//             return false;
//         }

//         if (v2[str2[i]] != -1 && v2[str2[i]] != str1[i]) {
//             return false;
//         }

//         // Establish the mapping
//         v1[str1[i]] = str2[i];
//         v2[str2[i]] = str1[i];
//     }

//     return true;
// }

// int main() {
//     string str1, str2;

//     cin >> str1 >> str2;

//     cout << isomorphic(str1, str2) << endl;

//     return 0;
// }  yeh bhi nhi ayya ek question hai hi
