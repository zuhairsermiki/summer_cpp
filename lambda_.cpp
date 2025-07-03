#include<iostream>
using namespace std;
int main(){
    int a=17;
auto func=[&a](int c,int b)mutable{
  cout<<"zuhair hussain sermiki"<<c<<b<<endl;
  a++;
};

func(1,2);
cout<<a;

return 0;
}

