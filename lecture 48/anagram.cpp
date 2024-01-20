 #include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
bool anagram(string str1,string str2){
vector<int>freq(26,0);
if(str1.size()!=str2.size()){
    return false;
}

for(int i=0;i<str1.size();i++){
freq[str1[i]-'a']++;//freq is in numbers and it is in string we will store string in integer vectoe 
freq[str2[i]-'a']--;
}
for(int i=0;i<26;i++){
    if(freq[i]!=0){
    return false;
}
   //tc 0(lengthof anagram string)//we are using freq array that will be o(26)
   }
return true;}

 int main()
{
string str1,str2;

cin>>str1>>str2;

cout<<anagram(str1,str2)<<endl;
if(anagram(str1,str2)){
    cout<<"strings are anagram";
}
else{
    cout<<"strings are not  anagram";
}

return 0;
}