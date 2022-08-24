// Factoriales sin recursividad
// la complejidad de este aloritmo es de 2n-1 siendo n dado por el numero al cual deseas calcular el factorial ;)
#include <stdio.h>
/*
factRecursion(n) {
	if (n lt 0)
		return 0
	else if (n equal 0)
		return 1
	else if (n equal 1)
		return 1
	else
		return n * fact(n - 1)
}
*/


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
	
