#include<iostream>
using namespace std;
struct mystruct{

    mystruct(){
        cout<<"constructor called\n";
    }
    ~mystruct(){
        cout<<"distructor called\n";
    }
  
};
int main(){
    mystruct a;
    return 0;
}