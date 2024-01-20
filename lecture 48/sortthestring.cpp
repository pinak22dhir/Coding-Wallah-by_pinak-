// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cstring>
// #include<string>
// using namespace std;
// string sorthestring(string str){//String or string  by using it will show error
// vector<int>freq(26,0);
// for(int i=0;i<str.size();i++){
//     //   freq[i]=freq[i]-freq['a'];
//     //int index
// //      freq[i]=freq[i]-'a';
// // freq[i]++;

// freq[str[i]-'a']++;

// }
// //created a sorted string
// // string solved;
// // for(int i=0;i<solved.size();i++){
// //     while(freq[i]--){
// //    solved.push_back(solved[i]+solved['a']);     
// //     }
// // }}
// //created sorted string
// int j=0;
// for(int i=0;i<=26;i++){
// while(freq[i]--){
//     str[j++]=i+'a';
  
// }
// }
// return str;}
// //a-z 97 -122 total--> size26--> 256--> 0  -->26 -->a  a asci 97 -97
// //index string[i]-str[a];

// //time complexity o(n)-->count sort

// int main()
// {
// string str;

// // getline(cin,str); ek string ke liye use mt kro
// cin>>str;

// cout<<sorthestring(str)<<endl;

// return 0;
// }
#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
string sorthestring(string str){
vector<int>freq(26,0);//26 elements
//tc 0(n) lengrth of a string space complex 0(26) for frequents 
for(int i=0;i<str.size();i++){
freq[str[i]-'a']++;

}

int j=0;
for(int i=0;i<26;i++){//0 to 25 <=26 as important boundary limit 
while(freq[i]--){
    str[j++]=i+'a';
  
}
}
return str;}

//time complexity o(n)-->count sort

int main()
{
string str;
cin>>str;

cout<<sorthestring(str)<<endl;

return 0;
}
// string sorthestring(string str){
// vector<int>freq(26,0);//26 elements
// //tc 0(n) lengrth of a string space complex 0(26) for frequents 
// for(int i=0;i<str.size();i++){
// freq[str[i]-'a']++;

// }
//String sorted;

// 
// for(int i=0;i<26;i++){//0 to 25 <=26 as important boundary limit 
// while(freq[i]--){
//   sorted[i++]=i+'a';
//sorted.push_back(i+'a');
  
// }
// }
// return sorted;}