#include<iostream>

using namespace std;
class ali{
 
  public:
  ali(){
    cout<<"constructer called\n";
  
  }
  ali( const ali &a){
    cout<<"copy constructor\n";
    cout<<a.x<<endl;
  }
  int x=17;
  ~ali(){
    cout<<"destructor called\n";
  }
   
  
};
void func(ali a){
  cout<<"function\n";
    cout<<a.x<<endl;
}
int main(){
  ali a;
  a.x=4000;
  func(a);
  cout<<a.x<<endl;
  
return 0;
}

