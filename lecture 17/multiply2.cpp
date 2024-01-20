#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    int r2,c2;
    cin>>r2>>c2;
    int B[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }

   
if(c1!=r2){
    cout<<("matrix multiplication not possible");
}
  int C[r1][c2];
for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j]=0;
            //it is very important to initialize each element  to zero 
            // and then let the product of each element begins with zero
            for(int k=0;k<r2;k++){
            C[i][j]+=A[i][k]*B[k][j];
        }
    }}
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
           cout<<C[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
int main(){
    int r1,r2,c1,c2;
    cin>>r1>>r2>>c1>>c2;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
       for(int j=0;j<c1;j++) {
       cin<<A[i][j]; 
       }
    }
     int B[r2][c2];
    for(int i=0;i<r2;i++){
       for(int j=0;j<c2;j++) {
       cin<<A[i][j]; 
       }
    }
    if(c1!=r2){
        printf("matrix");
    }
    int C[r1][c2];
     int A[r1][c1];
    for(int i=0;i<r1;i++){
       for(int j=0;j<c2;j++) {
     C[i][j]=0;
      for(int k=0;k<r1;k++) {
        c[i][j]+=A[i][j]*B[i][j]
;      }
       }
    }
    for(int i=0;i<r1;i++){
       for(int j=0;j<c2;j++) {
    cout<<C[i][j];

}