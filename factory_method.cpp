#include<iostream>
using namespace std;
class myclas{
   static int i;
   
    myclas(){
      cout<<"constructor called :"<<endl;
    }
    public:
    void output(){
        cout<<"output"<<endl;
    }
     
  static myclas *func(){
    return new myclas;
  }

};
int myclas::i=0;
int main(){

   myclas *obj=myclas::func();
   obj->output();
   
    return 0;
}