#include <stdio.h>
#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>
#include <Fila.h>

int main(){
	srand(time(NULL));
	no *J1,*J2;
	J1 = inicializaFila(31);
	J2 = inicializaFila(J2);

	for(int i=0;i<10;i++){
		int numero = rand()%4;
		J1 = insereFila(J1,numero);

	}

	for(int i=0;i<10;i++){
		int numero = rand()%4;
		J2 = insereFila(J2,numero);
		
	}

	imprimeFila(J1);
	imprime Fila(J2);

	return 0;
}