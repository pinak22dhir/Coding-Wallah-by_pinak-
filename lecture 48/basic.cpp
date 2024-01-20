#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()

  {
    string str="college";
    string str1("wallah");
    cout<<str<<" "<<str1<<endl;
    string str2;
    cin>>str2;
    cout<<str2<<endl;
    string str3;
    getline(cin,str3);
    cout<<str3<<endl;
    string str4="pinakdhir";
    cout<<str4.substr(1,4)<<endl;
      cout<<str4.substr(1)<<endl;
      string str5="college";
      string str6="wallah";
      cout<<str5+str6<<endl;
      char s1[20]="pinak";
      char s2[20]="dhir";
      strcat(s1,s2);
      cout<<s1<<endl;
      string s5="abcde";
      char ch='e';
      s5.push_back(ch);
      cout<<s5<<endl;
      int num=102;
      string str9=to_string(num);
      str9+="1";
      cout<<str9<<endl;

return 0;
}