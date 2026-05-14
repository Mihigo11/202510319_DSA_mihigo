#include<iostream>

using namespace std;

int main(){

    int List[4] = {77, 35, 103, 29};


    cout << "ARRAY BEFORE SORTING:" << endl;
    for(int i = 0; i < 4; i++){
        cout << List[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4 - i - 1; j++){
            if(List[j] > List[j + 1]){
            
                int temp = List[j];
                List[j] = List[j + 1]; 
                List[j + 1] = temp;
            }
        }
    }

    cout << "ARRAY AFTER SORTING:" << endl;
    for(int i = 0; i < 4; i++){
        cout << List[i] << " ";
    }
    cout << endl;

    return 0;
}
