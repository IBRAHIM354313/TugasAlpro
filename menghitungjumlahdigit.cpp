#include<iostream>
using namespace std;

int main (){
    int angka,jumlahdigit =0;

    cout<<"masukan angka:";
    cin>>angka;

    while (angka !=0){
      angka/=10;
      jumlahdigit++;  
    }

    cout<<"jumlahdigit;"<<
jumlahdigit<<endl;

    return 0;
}
