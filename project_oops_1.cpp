#include<iostream>
#include<iomanip>
using namespace std;
void output(string arr[],int size){
   cout<<setw(30)<<"================================"<<endl;
    for(int i=0;i<size;i++){
        cout<<setw(3)<<"||"<<i+1<<"."<<left<<setw(25)<<arr[i]<<"||"<<endl; 
    }
    cout<<setw(30)<<"================================"<<endl;
}
int  input(int limit){
    int idx;
     while(true){
    cout<<"enter:";
    cin>>idx;
        if(idx<=limit&&idx>0){ 
            return idx-1;
        }else{ 
            cout<<"you entered a wrong credentials!\n";
         }
    }    
}


class cityobject{
    int pollutiongenerted;
    int energyconsumpt;
    int energygenerate;
    int cost;
    int revenue;
    string name;
    friend class citygenerator;
    public:
    cityobject(string name,float energyconsumpt,float energygenerate,float cost,float revenue,int pollutiogenerated){
        this->name=name;
        this->energyconsumpt=energyconsumpt;
        this->cost=cost;
        this->energygenerate=energygenerate;
        this->revenue=revenue;
        this->pollutiongenerted=pollutiogenerated;
    }
    ~cityobject(){}
};
class citygenerator{
    string cityname;
    int  budget;
    const int size=100;
    cityobject *city[100]={nullptr};
    int objcount=0;
     string option[5]={"city structure","add infrastructure","display city status","City report","Exit"};
      string infraname[10]={"Buildings","Comercials","School","Hospital","Car","EV","Bus","Hydropower","Solarplant","park"};
     int devlopmentCost[10]={10,20,25,25,10,15,15,150,100,30};//cost in million
     int energyconsumption[10]={10,20,25,25,10,15,15,150,100,10};//in kw
     int energygenerate[10]={00,00,00,00,00,00,0,50,10,0};//in mw
     int revenuegenrate[10]={1,20,2,2,1,1,2,150,100,4};//revenue in milion
     int pollutiongenerate[10]={1,20,2,2,1,1,2,150,100,-300};//pollution
     int devcostsum=0,enerconssum=0,energygensum=0,revsum=0,pgensum=0;
    public:

    citygenerator(string n,int b):cityname(n),budget(b){
    cout<<cityname<<" named city created with budget :"<<budget<<endl;
    for(int i=0;i<10;i++){
        city[objcount++]=addobj(i);
    }
    }
    void generator(){
        cout<<"you are modifyng "<<cityname<<endl;
        while(true){
    output(option,sizeof(option)/sizeof(option[0]));
    switch(input(sizeof(option)/sizeof(option[0]))+1){
      case 1:
      cout<<"city structure";
      break;
      case 2:
       {
        output(infraname,sizeof(infraname)/sizeof(infraname[0]));
       city[objcount++]=addobj(input(objcount));
       }
    break;
    case 3:
    cout<<".........display city........."<<endl;
    cout<<setw(15)<<"City name :"<<setw(4)<<cityname<<endl;
    cout<<setw(15)<<"Total Development cost :"<<setw(4)<<devcostsum<<endl;
    cout<<setw(15)<<"Total Revenue generate :"<<setw(4)<<revsum<<endl;
    cout<<setw(15)<<"Total Energy generate :"<<setw(4)<<energygensum<<endl;
    cout<<setw(15)<<"Total Energy consumption :"<<setw(4)<<enerconssum<<endl;
    cout<<setw(15)<<"Total Pollution Generated :"<<setw(4)<<pgensum<<endl;
    
    
    break;
    case 4:cout<<"city report\n";
    break;
    case 5:cout<<"return to main menu";
    return ;
    break;
    default :{
    cout<<"you enterd wrong credentials";}
    }
    }
    }
  cityobject* addobj(int i){
    enerconssum=enerconssum+energyconsumption[i];
    energygensum=energygensum+energygenerate[i]*1000;
    devcostsum=devcostsum+devlopmentCost[i];
    revsum=revsum+revenuegenrate[i];
    pgensum=pgensum+pollutiongenerate[i];
    return new cityobject(infraname[i],energyconsumption[i],energygenerate[i],devlopmentCost[i],revenuegenrate[i],pollutiongenerate[i]);
  }

~citygenerator(){
    for(int i=0;i<objcount;i++){  delete city[i]; } 
}
};
void menu(){
    cout<<sizeof(citygenerator)<<endl;
    string menuoption[]={"Create new city","modify previous city","City comparison list","exit.."};
    string CityNames[10];
    citygenerator *city[10]={nullptr};
    int count=0;
    
    while(true){
    output(menuoption,size(menuoption));
    cout<<size(menuoption)<<endl;
    switch(input(size(menuoption))+1){
        case 1:
           if(count<10){
                 cout<<"generate new city\n";
                 string name;
                 int budget;
                 cout<<"enter name of city:";
                 cin>>name;
                 cout<<"enter budget :";
                 cin>>budget;
                 city[count]=new citygenerator(name,budget);
                 CityNames[count++]=name;
             }
        break;
        case 2:
           cout<<"modify previous cities\n";
           output(CityNames,count);
           city[input(count)]->generator();
          break;
        case 3:
           cout<<"city ranks\n";
        break;
        case 4:
           cout<<"exiting.........\n";
        return;
      }
   }   
}
int main(){
    
    menu();
    return 0;
}


