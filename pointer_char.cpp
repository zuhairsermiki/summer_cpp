#include<iostream>
using namespace std;
int main(){
char *mesage{"hello kaise ho"};
    char **message{};
    message=&mesage;
    cout<<"**message :"<<**message<<endl;
    cout<<"*message :"<<*message<<endl;
    cout<<"message :"<<message<<endl;
    cout<<"&mesage :"<<&mesage<<endl;
    char arr[]{"khella ga free fire:"};
    cout<<"after changes"<<endl;
    mesage=arr;
     cout<<"**message :"<<**message<<endl;
    cout<<"*message :"<<*message+2<<endl;
    cout<<"message :"<<message<<endl;
    cout<<"&mesage :"<<&mesage<<endl;
    cout<<"&message :"<<&message<<endl;
    return 0;
}