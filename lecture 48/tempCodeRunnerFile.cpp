#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
string decode(string str){
string result=" ";

for (int i=0;i<str.size();i++) {
    if(str[i] !=']'){//!='' not with this ""
//         length() is a member function specifically used with string objects.
// It also returns the number of characters in the string.
// size() is a member function commonly used with containers such as vectors, arrays, and other standard library containers.
// result+=str[i];
// += operator is used for concatenating strings, not individual characters.
result.push_back(str[i]);
    }
  else{
string str2=" ";
while(!result.empty() && result.back()!='['){
        str2.push_back(result.back());
       result.pop_back();//result ko khali temp mein jayega str2
  }//reversing 
        reverse(str2.begin(),str2.end());
    
    result.pop_back();//"["
   string num=" ";
  while(!result.empty()&& (result.back()>='0'&& result.back()<='9')) { //>=" ! " use nhi hai" '
 num.push_back(result.back());
 result.pop_back();}
 reverse(num.begin(),num.end());
 int int_num=stoi(num);
while(int_num>0){
 result+=str2;
int_num--;
}}}
return result;
  }
int main(){

  string str;
cin>>str;
cout<<decode(str)<<endl;
    
}