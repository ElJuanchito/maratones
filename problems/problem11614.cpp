//
// Created by juanp on 9/8/2023.
//

#include <iostream>

using namespace std;

int getNumberOfRows(int n){
    int cont=0;
    int rest = 1;
    for (int i = n; i > 0; i--,cont++, rest++) {
        i= i-rest;
    }
    return cont;
}

int main(){
    int n;
    while (cin>>n){
        cout<<getNumberOfRows(n)<<endl;
    }
    return 0;
}


