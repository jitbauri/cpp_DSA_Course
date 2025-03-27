#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    string name;
    string color;
    int *mileage;
    car(string name,string color){
        this->name=name;
        this->color=color;
        mileage=new int;//dynamic allocation
        *mileage=12;
    }
    car(car &original){
        cout<<"copying original to new..\n";
        name=original.name;
        color=original.color;
        mileage=original.mileage;
    }
};

int main(){
    car c1("maruti 800","white");
    car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage=10;
    cout<<*c1.mileage<<endl;


return 0;
}

