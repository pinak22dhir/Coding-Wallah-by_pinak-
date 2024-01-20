#include<iostream>
#include<string>
using namespace std;
class Fruit{
    //by default --> it is private
    public:
    string name;
    string color;
};

int main(){
Fruit apple;//object
apple.name="apple";
apple.color="red";
cout<<apple.name<<" "<<apple.color<<endl;
Fruit *mango=new Fruit();
mango->name="mango";
mango->color="yellow";
cout<<mango->name<<" "<<mango->color<<endl;

    return 0;
}
