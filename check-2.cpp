#include<iostream>
using namespace std;
class myclass1{
    int age;
    string name;
    public:
    myclass1(string name,int age){
    this->name=name;
    this->age=age;
  }
  void output(){
    cout<<"name : "<<name<<", Age :"<<age<<endl;
  }
};
class user{
  myclass1 *cls[3]{nullptr};
  string name[3]{"zuhair","ali","muhammad"};
  int age[3]{18,34,20};
  public:
  user(){
    for(int i=0;i<3;i++){
        cls[i]=add(i); 
    }
    output();
  }
  myclass1* add(int i){
   return new myclass1(name[i],age[i]);
  }
  void output(){
    int i=0;
    while(cls[i]){
      cls[i]->output();
      delete cls[i++];
    }
  }
};
int main(){
    user u;
    return 0;
}