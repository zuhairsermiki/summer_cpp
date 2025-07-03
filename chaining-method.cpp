#include<iostream>
using namespace std;

class mine{
  string name;
  public:
  string &g=name;
  int l;

  void output(){
    cout<<name<<endl;
    cout<<l<<endl;
  }
  mine * setg(string g){
    this->g=g;
    return this;
  }
  mine* setl(int i){
  l=i;
  return this;
  }
  mine & setg1(string g){
    this->g=g;
    return *this;
  }
  mine& setl1(int i){
  l=i;
  return *this;
  }
  
};
int main(){
  mine m;
  m.setg("zuhiar")->setl(400);
  m.output();
  m.setg1("hussain").setl1(100);
  m.output();
  

return 0;
}
