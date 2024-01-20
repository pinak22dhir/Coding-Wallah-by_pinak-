#include<iostream>
using namespace std;
class Sum{
    public:
    void add(int x,int y){
        int sum=x+y;
        cout<<sum<<endl;
    }
      void add(int x,int y,int z){
        int sum=x+y+z;
        cout<<sum<<endl;
    }
     void add(float x,float y,float z){
        float sum=x+y+z;
        cout<<sum<<endl;
    }
};
int main(){
    Sum s;
    s.add(1,2);
     s.add(1,2,3);
      s.add(float(1.5),float(2.7),float(7.8));
      return 0;
}