#include<iostream>
using namespace std;
class base {
    public:
    base (){
        cout<<"base cons"<<endl;
    }
 virtual ~base (){
        cout<<"base distructer"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"derived cons"<<endl;
    }
    ~derived(){
        cout<<"derived distructer"<<endl;
    }
};
int main(){
    // base*b=new derived();
    // delete b;
    derived d;
    base *b=&d;
    return 0;
}