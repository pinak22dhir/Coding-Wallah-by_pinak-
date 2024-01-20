//1. Here you can use int function 
// #include<iostream>
// #include<vector>
// using namespace std;
// int sortbysquare(vector<int> &v) {
//     vector<int> vi;
//     int left_ptr = 0;
//     int right_ptr = v.size() - 1;
    
//     while (left_ptr <= right_ptr) {
//         if (abs(v[left_ptr])>abs(v[right_ptr])) {
//           vi.push_back(v[left_ptr]*v[left_ptr]); 
//           left_ptr++;
//         }
//         else{
//             vi.push_back(v[right_ptr]*v[right_ptr]);
//         right_ptr--;
//         }
//     }
//     for(int i=0;i<vi.size();i++){
//         cout<<vi[i]<<" ";
//     }

//     return 0;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//    int square= sortbysquare(v); 
//    cout<<square<<" ";
//     // for (int i = 0; i < n; i++) {
//     //     cout << v[i] << " ";
//     // } we will not use it 

//     return 0;
// }

//2. we can use it second way with void function 
#include <iostream>
#include<algorithm>// for using reverse keyword we will use algorithm header file
#include <vector>
using namespace std;

void sortbysquare(vector<int> &v) {
    vector<int> vi;
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr <= right_ptr) {
        if (abs(v[left_ptr]) > abs(v[right_ptr])) {
            vi.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++; // Update left pointer
        } else {
            vi.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--; // Update right pointer
        }
    }
//can reverse it 
reverse(vi.begin(),vi.end());
    for (int i = 0; i < vi.size(); i++) {
        cout << vi[i] << " ";
    }

    return ;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
  sortbysquare(v);

    return 0;
}
