#include<iostream>
#include<vector>
#include<cstring>
#include<string>
// #include<algorithm>
using namespace std;
string decode(string str){
string result="";
//dont give " "
//  space it will show error
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
string str2="";
while(!result.empty() && result.back()!='['){
        str2.push_back(result.back());
       result.pop_back();//result ko khali temp mein jayega str2
  }//reversing 
        reverse(str2.begin(),str2.end());
    
    result.pop_back();//"["
   string num="";
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
// // 0. if str[i]!= "]" insert into result
// // 1. else extract str from result till '['
// // 2. reverse str
// // 3.remove last digit 
// // 4.  num_get till s[i]>="0" && <="9"
// // 4.  num_get till s[i]>="0" && <="9"
// // extract digit 
// // 5. reverse num
// // 6. convert num string to int 
// // 7. insert str in result , int num_times
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// using namespace std;

// string decode(const string& str) {
//     string result = "";

//     for (int i = 0; i < str.size(); i++) {
//         if (str[i] != ']') {
//             result.push_back(str[i]);
//         } else {
//             string str2 = "";
            
//             // Extract characters until '['
//             while (!result.empty() && result.back() != '[') {
//                 str2.push_back(result.back());
//                 result.pop_back();
//             }

//             // Reverse str2
//             reverse(str2.begin(), str2.end());

//             // Remove '['
//             result.pop_back();

//             // Extract number
//             string num = "";
//             while (!result.empty() && isdigit(result.back())) {
//                 num.push_back(result.back());
//                 result.pop_back();
//             }

//             // Reverse num
//             reverse(num.begin(), num.end());

//             // Convert num string to int
//             int int_num = stoi(num);

//             // Insert str2 into result int_num times
//             while (int_num > 0) {
//                 result += str2;
//                 int_num--;
//             }
//         }
//     }

//     return result;
// }

// int main() {
//     string str;
//     cin >> str;
//     cout << decode(str) << endl;

//     return 0;
// }
//space complexity --> o(n) length of string
//tc o(n) ---> string extract but inputting result  
//ac string it is'a' 'c