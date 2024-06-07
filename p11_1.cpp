#include<iostream>
#include<string>
using namespace std;

class Hewan{
public:
      void predator(){
      cout<< "Hewan ini predator"<<endl;
      }
      void taring(){
      cout<< "Hewan ini bertaring" <<endl;
      }
      void cakar(){
      cout<<"Hewan ini memiliki cakar" <<endl;
}
};
class Harimau:public Hewan{
public:
     void getHarimau(){
        cout<<"ini adalah Harimau"<<endl;
     }
};
class Singa:public Hewan{
public:
     void getSinga(){
         cout<<"ini adalah Singa"<<endl;
     }
};
class Macan:public Hewan{
public:
     void getMacan(){
        cout<<"ini adalah Macan"<<endl;
     }    
};
int main(){
    Harimau hrm; 
     hrm.getHarimau();                 
     hrm.predator();                
     hrm.taring();                  
     hrm.cakar();
     Singa sng;
     sng.getSinga();                 
     sng.predator();                
     sng.taring();                  
     sng.cakar();
     Macan Mcn;
     Mcn.getMacan();                 
     Mcn.predator();                
     Mcn.taring();                  
     Mcn.cakar();
     return 0;

};