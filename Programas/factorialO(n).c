// Factoriales sin recursividad
#include <stdio.h>

int f(int n){
	
	int m;
		m=n;
	do {
	 m=m*(n-1);
	 n=n-1;
		printf ("\nUno de los numeros para llegar al factorial es: %d", m);
	}while (n!=1);
		printf ("\n El factorial es: %d", m);
}



int main(){
	
	unsigned int n=10;
	
	f(n);
}
	
