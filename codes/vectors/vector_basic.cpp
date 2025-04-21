#include<iostream>
#include<vector>
using namespace std;
//basic of vectors
int main(){
vector<int >vec1;
vector<int>vec2={1,2,3,4};
cout<<vec2.size()<<"\n";
// -1 se initilize
vector<int>vec3(5,-1);
for(int i=0;i<vec3.size();i++){
    cout<<vec3[i]<<" ";
}
cout<<endl;
cout<<vec3.size()<<"\n";
    return 0;
}