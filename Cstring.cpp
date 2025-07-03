#include<iostream>
#include<cstring>
using namespace std;


int main(){
char c='9';
if(isalnum(c)){cout<<"c"<<endl;}//check the given belongs to char family and return true
char f='g';
if(isblank(f)){cout<<"is blank"<<endl;}//check if it is blank or not
if(islower(f)){cout<<"lower"<<endl;}//check if it is lower or upper
if(isupper(f)){cout<<"upper"<<endl;}
if(isdigit(f)){cout<<"digit"<<endl;}
if(islower(f)){f=toupper(f);}//convert to uper case 
else if(isupper(f)){f=tolower(f);}//convert to lower case
if(isblank(f)){cout<<"is blank"<<endl;}//check if it is blank or not
if(islower(f)){cout<<"lower"<<endl;}//check if it is lower or upper
if(isupper(f)){cout<<"upper"<<endl;}
if(isdigit(f)){cout<<"digit"<<endl;}


return 0;
}

