#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"base cons"<<endl;
    }
    virtual void output(){
        cout<<"base output"<<endl;
    }
   virtual ~base(){
        cout<<"base distructer"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"derived cons"<<endl;
    }
    // void output()override{
    //     cout<<"derived output"<<endl;
    // }
    void check(){
        cout<<"only in derived"<<endl;
    }
     ~derived(){
        cout<<"derived dis"<<endl;
    }
};
int main(){
//     //with ptr
//    base *b=new derived;
//    derived *d=dynamic_cast<derived*>(b);
//    if(d){
//     d->output();
//     d->check();
//    }
//    else{
//     cout<<"dynaimc cast not happened"<<endl;
//    }
//    delete d;
   //with references
   derived dr;
   base &bb=dr;
   derived &dd=dynamic_cast<derived &>(bb);
   cout<<"reference"<<endl;
   dd.check();
   dd.output();
  
    return 0;
}