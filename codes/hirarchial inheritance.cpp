#include<iostream>
#include<string>
using namespace std;
//hierarchial inheritance
class Animal{
    public:
    void eat(){
        cout<<"eats.."<<endl;
    }
    void breathe(){
        cout<<"breathe"<<endl;
    }
};
class bird :public Animal{
    public:
    void fly(){
        cout<<"falying.."<<endl;
    }
};
class fish : public Animal{
    public:
void swim(){
    cout<<"swiming.."<<endl;
}
};
class mammel : public Animal{
    public:
    void walk(){
        cout<<"walking..";
    }
};

int main(){
fish f1;
f1.eat();
f1.breathe();
f1.swim();
return 0;
}