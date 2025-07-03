#include<iostream>
using namespace std;

int main(){
   
    // 
  
     int** arr=new int*[2];
     for(int i=0;i<2;i++){
        arr[i]=new int[3];
     }
     int  val=1;
      for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=val++;
        }
        cout<<endl;
    }

  cout<<"Original matrix \n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr[j][i]<<" ";
        }
        
        cout<<endl;
    }
    
}