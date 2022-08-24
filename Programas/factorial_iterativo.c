#include <stdio.h>
// la cantidad de paso que debe dar este algoritmo est dado por O(2n-1)
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

factRecursion(int n) {
	if (n < 0)
		return 0;
	else if (n == 0)
		return 1;
	else if (n == 1)
		return 1;
	else
		return n * factRecursion(n-1);
}

int main (){
  unsigned int n=1;
  factRecursion(n);
  printf("%d", n);
	
}
