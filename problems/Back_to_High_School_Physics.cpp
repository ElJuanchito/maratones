//
// Created by juanp on 9/8/2023.
//

#include <iostream>

using namespace std;

void getDisplacement(int v, int t);

/*
int main(){
    int v, t;
    while (cin>>v>>t){
        getDisplacement(v, t);
    }
    return 0;
}
*/

void getDisplacement(int v, int t){
    cout<<(v * t * 2)<<endl;
}
