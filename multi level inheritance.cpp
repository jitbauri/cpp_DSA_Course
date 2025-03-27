  #include<iostream>
  #include<string>
  using namespace std;
class Animal{
    public:
    void eat(){
       cout<<"eats\n"; 
    }
    void breathe(){
        cout<<"breathe\n";
    }

};
class mamel : public Animal{
    public:
    string bloodtype;
    mamel(){
        bloodtype="warm";
    }

};
class dog : public mamel{
    public:
    void tailwag(){
        cout<<"a dog waggs its tail\n";

    }

};


int main(){
dog d1;
d1.eat();
d1.breathe();
d1.tailwag();
cout<<d1.bloodtype;
return 0;

}