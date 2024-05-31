#include<iostream>
using namespace std;
class number1{
    private:
    int y;
    public:
    void setY(int ui){
        y=ui;
    }
    int getY(){
        return y;
    }
};
class number2{
    public:
    int x;
};
int main(){
    number1 satu;
    number2 dua;
    satu.setY(25);
    dua.x=30;

    cout<<"y:"<<satu.getY()<<endl;
    cout<<"x:"<<dua.x<<endl;
    return 0;

}