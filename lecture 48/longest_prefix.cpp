#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>
using namespace std;
// string longest(vector<string> &str){

// sort(str.begin(),str.end());
// string s1=str[0];//first string
// int i=0;
// //transverse
// string s2=str[str.size()-1];//last string
// int j=0;
// string ans=" ";
// // while(i<s1.size()&&j<s2.size()){
// // if(s1[i]==s2[j]){
// //     // ans.push_back(s1[i]); push back vectors mein hota hai 
// //     ans+=s1[i];
// //     i++;j++;
// // }
// // else{
// //     break;
// // }
// while(i<s1.size()&&j<s2.size()){
// if(s1[i]==s2[j]){
//     // ans.push_back(s1[i]); push back vectors mein hota hai 
//     ans+=s1[i];
//     i++;j++;
// }
// else{
//     break;
// }
// }

// return ans;}

// int    main(){

// cout<<"enter no of strings";
// int n;
// cin>>n;
// // string arr[n]; does not be in array but vector
// vector<string> str(n);
// for(int i=0;i<n;i++){
// cin>>str[i];
// }
// cout<<longest(str)<<endl;
// }
//sortingo(nlogn)inbuilt forstrings o(nlogn*m)general length of strings +to find minim
// vector<char> ans;
//vector<char> ans
//     while (i < s1.size() && j < s2.size()) {
//         if (s1[i] == s2[j]) {
 //   ans.push_back()
//             ans.push_back(s1[i]);
//             i++;
//             j++;
//         } else {
//             break;
//         }
//     } 2nd solution we dont have to sort it,-->anslength ans.substr(0,ans_length)
// string longest(vector<string> &str){
//     string s1= str[0];
//     int ans_length=s1.size();


//     //keeping first as cosr it with all other strings
//     //now com[paring starts;
//     for(int i=1;i<str.size();i++){
// int j=0;//transverse
// while(j<=s1.size()&& j<str[i].size()&& s1[j]==str[i][j]){
//     j++;
//     ans_length=min(ans_length,j);//updating length 3,5, 2
//     }

// }
//  string ans=s1.substr(0,ans_length);
    
//  return ans;   
// }
//  int    main(){

// cout<<"enter no of strings";
// int n;
// cin>>n;
// // string arr[n]; does not be in array but vector
// vector<string> str(n);
// for(int i=0;i<n;i++){
// cin>>str[i];
// }
// cout<<longest(str)<<endl;
// }


// k 
// Time Complexity:

// In this case, the function would iterate through the strings and compare the characters at each position.
// The common prefix is "ap" (the first two letters).
// The outer loop runs for each string, so n = 4 (number of strings).
// The inner while loop runs until a mismatch is found or the end of one of the strings is reached. In the worst case, it compares the first two letters of each string.
// Therefore, the total number of comparisons is m * n, where m = 2 (length of the common prefix) and n = 4. So, the time complexity is O(m * n), which is O(2 * 4) = O(8).
//space is 0(1)
 string longest(vector<string> &str){
    // if(str.empty()){-->use it
    //     return " ";
    // }
    string s1= str[0];
    int ans_length=s1.size();
int ans_length=0;
    for(int i=1;i<str.size();i++){
int j=0;
while(j<=s1.size()&& j<str[i].size()&& s1[j]==str[i][j]){
    j++;
  
    }
}
 string ans=s1.substr(0,ans_length);
    
 return ans;   
}

// vector<char> shortest(vector<string> &str){
//     vector<char> commonprefix;
//     if(str.empty()){
//         return commonprefix;
//     }
//     string s1=str[0];
//     for(int i=0;i<s1.size();i++){
//      char commchar=" ";
//         while(j<s1.size();j<str.size();){

//         }
//         commonprefix.push_back(currchar);
//     }
//     return commonprefix;
// }


// vector<char> shortestCommonPrefix(vector<string> &str) {
//     vector<char> commonPrefix;
    
//     if (str.empty()) {
//         return commonPrefix; // Return an empty vector for an empty input
//     }

//     string s1 = str[0];

//     for (int j = 0; j < s1.size(); j++) {
//         char currentChar = s1[j];
        
//         for (int i = 1; i < str.size(); i++) {
//             if (j >= str[i].size() || str[i][j] != currentChar) {
//                 return commonPrefix; // Stop if a mismatch is found or the end of a string is reached
//             }
//         }

//         commonPrefix.push_back(currentChar); // Append the common character to the result vector
//     }

//     return commonPrefix;
// }

// int main() {
//     cout << "Enter the number of strings: ";
//     int n;
//     cin >> n;

//     vector<string> str(n);
//     cout << "Enter the strings: ";
//     for (int i = 0; i < n; i++) {
//         cin >> str[i];
//     }

//     vector<char> result = shortestCommonPrefix(str);

//     cout << "Shortest common prefix: ";
//     for (char c : result) {
//         cout << c;
//     }
//     cout << endl;

//     return 0;
// }//nhi aata

int main() {
    cout << "Enter the number of strings: ";
    int n;
    cin >> n;

    vector<string> str(n);
    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    cout << "Longest common prefix: " << longest(str) << endl;
    return 0;
}
