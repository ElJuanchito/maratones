#include <iostream>

using namespace std;

int algoritmo(int n);
void imprimir(int i, int j);

/*
int main() {
    int i;
    int j;

    while (cin >> i >> j){
        imprimir(i, j);
    }
    return 0;
}
*/

int algoritmo(int n){
    int cont=0;
    int i=n;
    while (i!=1){
        if(! (i%2)==0){
            i=(3 * i) +1;
        } else{
            i= i/2;
        }
        cont++;
    }
    cont++;
    return cont;
}

void imprimir(int i, int j){
    int max= 0;
    int final= 0;
    int k = 0;
    if(i > j){
        k = j;
        final = i;
    }else{
        k = i;
        final = j;
    }
    for(; k<=final; k++){
        int aux = algoritmo(k);
        if(max < aux){
            max = aux;

        }
    }
    cout<<i<<" "<<j<<" "<<max<<endl;
}
