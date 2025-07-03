#include<iostream>
using namespace std;
class myclass{
  private:
  int age;
  string name;
  public:
  friend ostream &operator<<(ostream&,myclass &cls);
   myclass(string name,int age){
  
    func(name,age);

  }
  void func(string name,int age){
    this->name=name;
    this->age=age;
  }
};
ostream &operator<<(ostream&,myclass &cls){
  cout<<"name :"<<cls.name<<endl;
  cout<<"age :"<<cls.age<<endl;
}

int main(){
   myclass m("zuhair",18);
   cout<<m<<endl;
return 0;
}
