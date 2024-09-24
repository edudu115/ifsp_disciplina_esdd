#include <stdio.h>

int conta_digitos(int n, int d);

int main(){
    int num = 9537;

    conta_digitos(num, 5);
    return 0;
}

int conta_digitos(int n, int d){
    
    int cont = 0;

    while(n/10 > 0){
        int resto;
        cont++;

        resto = n % 100;
    }

    return cont;
}