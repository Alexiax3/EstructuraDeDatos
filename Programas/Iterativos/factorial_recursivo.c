// Factoriales sin recursividad
#include <stdio.h>
// el numero de pasos del algoritmo esta dado por O(n)

int f(int n){
	
	int m;
	if (n==0 || n==1){
		printf("El factorial es 1");
	}
	else{
		m=n;
	do {
	 m=m*(n-1);
	 n=n-1;
		printf ("\nUno de los numeros para llegar al factorial es: %d", m);
	}while (n!=1);
		printf ("\n El factorial es: %d", m);
	}
}



int main(){
	
	unsigned int n=10;
	
	f(n);
}
