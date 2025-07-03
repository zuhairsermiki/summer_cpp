#include<iostream>
using namespace std;

class ali{
 // int b;
public:
ali *ab;
int a=100;
 ali(){
     cout<<"ali cons called"<<this<<endl;
 }
 void output(){
  cout<<"a :"<<a<<endl;
 }
 ali(ali &a){
    cout<<"base copy "<<&a<<endl;
 }
 ~ali(){
  delete ab;
   cout<<"base distructor"<<this<<endl;
 }
};
class derived:public ali{
    public:
    derived(){
        cout<<"derived constructor"<<endl;  
    }
    ~derived(){
        cout<<"derived distructor"<<endl;
    }
};

int main(){
  derived d;
  cout<<"oye hoye"<<endl;
  ali &a=d;
  a.ab=&d;
  d.ab=&a;
  cout<<"size of derived :"<<sizeof(d)<<endl;
  cout<<"size of base :"<<sizeof(a)<<endl;
  d.ab->a=500;
  cout<<"ajjeb :"<<d.ab->ab->a<<"  ali: "<<a.ab->a<<endl;
  
 
    return 0;
}