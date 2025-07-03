#include<iostream>
using namespace std;
int main(){
    string  a("ali");
    string b{"hussain"};
    bool c(0);
    if(c) cout<<"yes";
    
    cout<<boolalpha;//convert 0 to flase and 1 t0 true
    cout<<c;
    char ch(65);
    cout<<endl<<ch;
    // auto it assingned data type after declaration of value
    auto cah(65);
   cout<< static_cast<char>(cah)<<endl;
   int i =0;
   cout<<static_cast<bool>(i)<<endl;
   int n=14;
   bool o=static_cast<bool>(n%2);
   if(o){
    cout<<"odd";

   }else{
    cout<<"even";
   }
//5:31
    return  0;
}