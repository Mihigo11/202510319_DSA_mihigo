#include <iostream>

using namespace std;

int main() {

    int matrix1[3][3] = {10,20,30,40,50,60};


    cout <<"Matrix: "<<endl;


    for(int i=0; i<=2; i++) {
        for(int k=0; k<=1; k++){
            cout <<matrix1[k][i] <<" ";
        }
        cout<<endl;
    }


    return 0;
}