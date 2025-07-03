#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    //without proper table formatting 
    string arr[5]={"zuhair","ali","muhammad","hussain","hassan"};
    int roll[5]={34,45,65,44,39};
    int marks[5]={12,13,14,14,15};
    cout<<"without table formating"<<endl;
    cout<<"Name"<<"Roll"<<"Marks"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<roll[i]<<marks[i]<<endl;
    }
    cout<<endl;
     cout<<"after table formating"<<endl;
     cout<<left<<setfill('-');
    cout<<setw(10)<<"Name"<<setw(5)<<"Roll"<<setw(5)<<"Mark"<<endl;
    
    for(int i=0;i<5;i++){
        cout<<setw(10)<<arr[i]<<setw(5)<<roll[i]<<setw(5)<<marks[i]<<endl;
    }
    //set precision
    double g=1.87648654677654787564876587654865;
    cout<<g<<endl;
    cout<<setprecision(5);
    cout<<g;
   
    
    return 0;
}