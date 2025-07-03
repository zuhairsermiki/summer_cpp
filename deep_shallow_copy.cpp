#include<iostream>
using namespace std;
void function(string & name,int& age){
  cout<<"name :"<<name<<endl;
  cout<<"age :"<<age<<endl;
}
class base{
   
  protected:
   base(){
    cout<<"base :"<<endl;

   }
   base(base &b){
    cout<<"base cons called"<<endl;
    a=b.a;
   }
   public:
  int a=450;
  int *b{nullptr};
 virtual  void func(){
    cout<<"base";
  }
};
class derived:public base{
  public:
  int c=a; 
  
  derived(){
    cout<<"derived :"<<endl;
    b=new int (a*2);
  }
  derived (derived &d):base(d){
    cout<<"copy constructor called \n";
    this->c=d.c;
    //b=d.b;//shallow copy
    b=new int(*d.b);//deep copy
  }
  void func()override{
    cout<<"derived"<<endl;
  }
  ~derived(){
    delete b;
    cout<<"distructor"<<endl;
  }
};



int main(){
 derived d;

d.c=100;
 cout<<"dc :"<<d.c<<endl;
 cout<<d.b<<" : "<<*d.b<<endl;
 derived dd=d;
 cout<<"ddc :"<<dd.c<<endl;
 cout<<dd.b<<" : "<<*dd.b<<endl;
 derived ddd(d);
 cout<<"ddd.c :"<<ddd.c<<endl;
 cout<<ddd.b<<" : "<<*ddd.b<<endl;


return 0;
}
