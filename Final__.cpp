#include<iostream>
using namespace std;
class base{
  public:
  
  virtual void output(){}
};
class derived final:public base{//this final restrict further inheritance
  public:
  int j=10;
  void output()override final{//this final restrict further overriding of output in next sub class
    cout<<"j :"<<j<<endl;
  }
};
//class suderived:public derived{};//this is not possible due to "final" written above after derived 

int main(){

  return 0;
}