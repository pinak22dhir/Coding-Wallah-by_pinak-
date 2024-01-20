#include<iostream>
using namespace std;
class parent{
    public: 
    int x;
    protected:
    int y;
    private:
    int z;
};
class Child1: public parent{
    //x will remain publi, y will remain public, z will not be accesible
};
class Child2: private parent{
    //x y private z inaccessible
};
class Child3: protected parent{
    //x y protected z inaccessible 
};
int main(){
    parent p;
    p.x;
    return 0;
}




