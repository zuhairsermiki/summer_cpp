#include<iostream>
using namespace std;
class abstract{
    public:
    abstract (){
        cout<<"abstract constructer"<<endl;
        //func();     //u can't call pure virtual func inabstract classes
       }
    virtual void func()=0;/*one pure virtual function made
                           function abstract class and this
                           class object creation is not possible*/
    void output(){
        cout<<"abstract output"<<endl;
    }
    virtual ~abstract(){
        cout<<"abstract distructer"<<endl;
    }
};
class derived:public abstract{
    public:
    derived(){
       cout<<"derived object created"<<endl;
       
    }
    void func()override{   /*if we don't override a pure
                            virtual function in derived 
                            class so it also become abstract classes*/
        cout<<"function overriding complete"<<endl;
    }
    void output(){
        cout<<"derived output"<<endl;
    }
    ~derived(){
        cout<<"derived distructeer "<<endl;
    }
};
class derived1:public derived{
    
};/*once pure virtual function is 
                               override than the  further derived
                                class no more became abstract  */
int main(){
    abstract *a=new derived;
    a->func();
    a->output();
    delete a;

    abstract *aa=new derived1;
    delete aa;
    return 0;
}