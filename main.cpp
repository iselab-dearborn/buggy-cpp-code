#include <iostream>
#include <cmath>

using namespace std;

int neverCalled(){
    return 1;
}

void buggyFunction(int x){

    int buf[10];

    if (x == 1000){
        buf[x] = 0; // <- ERROR
    }
}

float divideByZero(int p){

    int x = 0;

    return 2.0 / x;
}

int main(){

    int* vet1 = new int[3]{1,2,3};
    int* vet2 = vet1 + 5;
    // int* vet3 = vet1 - vet2;
    int neverUsed;

    buggyFunction(2);
    
    while(2 > 1){
        cout << "loop"; 
    }

    vet1[100] = 1;

    cout << divideByZero(2) << endl;

    goto B1;

    cout << "hi!" << endl;

    B1:
        cout << "Jumped!" << endl;
}