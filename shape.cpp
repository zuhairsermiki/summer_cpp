#include<iostream>
using namespace std;
void circle(int radius){
    int rn=radius;
    int ab=0;
    for(int i=0;i<2*radius;i++){
        for (int j=0;(j<rn||j<ab)&&ab>=0;j++){
          if(i+j==radius-1||j==rn-1){
            cout<<"*";
          } 
          else{
            cout<<"  ";
          }
        }
        cout<<endl;
        if(ab<2*radius){
        rn++;
      ab=rn;}else {
        rn--;    
        } 
    }
}
int main(){
    circle(5);
    return 0;
}