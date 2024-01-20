#include<iostream>
#include<vector>
using namespace std;
// int longest(string str,int k){
//       int s=0;
// int e=0;
// int zero_count=0;
// int max_length=0;
// for(int i=0;i<str.size();i++){
//     if(str[i]==0){
// zero_count++;
//     }
// while(zero_count<k){
//   e++;
// }
// while(zero_count>k){
//     if(str[i]=='0') zero_count--;
//     s++;
// }
// max_length=max(max_length,e-s+1);
// }
// return max_length;}
#include <iostream>
#include <string>
using namespace std;

int longest(string str, int k) {
    int s = 0;
    int e = 0;
    int zero_count = 0;
    int max_length = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '0') {
            zero_count++;
        }

        while (zero_count > k) {
            if (str[s] == '0') {
                zero_count--;
            }
            s++;
        }

        e ++;  // Update e inside the loop

        max_length = max(max_length, e - s + 1);
    }

    return max_length;
}

int main() {
    string str;
    cin >> str;

    int k;
    cin >> k;
    cout << longest(str, k);

    return 0;
}

// int longest(string str,int k){
//       int s=0;
// int e=0;
// int zero_count=0;
// int max_length=0;
// for(e=0;e<str.size();e++){
//     if(str[e]=='0'){
// zero_count++;
//     }
// // // while(zero_count<k){
// //     max_length++;
// //     e++;
// // }
// while(zero_count>k){
//     if(str[s]=='0') {zero_count--;}
//     s++;//contracting our window
// }
// max_length=max(max_length,e-s+1);
// }
// return max_length;}

// int main(){
//    string str;
//    cin>>str;
  
//     int k;
//     cin>>k;
//     cout<<longest(str,k);

// return 0;
// }