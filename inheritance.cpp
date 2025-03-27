  #include<iostream>
  #include<string>
  using namespace std;
class Animal{
    public:
    string color;
    void eat(){
        cout<<"eats..";
    }
    void breathe(){
      cout<<"breaths\n";
    }    
};
class fish:public Animal{
public:
int fins;
void swim(){
    cout<<"swims\n";
}
     
};
int main(){
fish f1;
f1.swim();
f1.eat();
f1.breathe();
}