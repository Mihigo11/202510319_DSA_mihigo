#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter the number of family members:"<<endl;
    cin>>x;
    int age[x];
    string name[x];
    string input;
for (int i=0;i<x;i++){
    cout<<"Enter the name of family member "<<(i+1)<<" :"<<endl;
    cin>>name[i];
    cout<<"Enter the age of family member "<<(i+1)<<" :"<<endl;
    cin>>age[i];
    
}
cout<<"Enter the name to search for :"<<endl;
cin>>input;
for (int i=0;i<x;i++){
if (input==name[i]){
    cout<<"The name was found"<<endl;
    cout<<"Name: "<<name[i]<<endl;
    cout<<"Age: "<<age[i];
    break;
}
else{ 
    cout<<"Not found "<<endl;
}}
    return 0;
}