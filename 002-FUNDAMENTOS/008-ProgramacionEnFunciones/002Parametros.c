#include <stdio.h>

//En C las funciones tienen que haber sido declaradas antes de llamarlas.
int sumar(int op1, int op2){
    
    int operador1 = op1;
    int operador2 = op2;
    
    int suma = operador1 + operador2;
        
    return suma;
}

int main (int argc,char *argv[]){
    
    printf("La suma es %i \n", sumar(3,4));
    printf("La suma es %i \n", sumar(3,6));
    printf("La suma es %i \n", sumar(1,4));
    return 0;
}

