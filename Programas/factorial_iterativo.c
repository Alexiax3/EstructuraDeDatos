#include <stdio.h>
// la cantidad de paso que debe dar este algoritmo est dado por O(2n-1)
/*
factTail(n, a) {
	if (n lt 0)
		return 0
	else if (n equal 0)
		return 1
	else if (n equal 1)
		return a
	else
		return factTail(n - 1, n * a)
}
*/

factTail(int n,int a) {
	if (n < 0)
		return 0;
	else if (n == 0)
		return 1;
	else if (n == 1)
		return a;
	else
		return factTail(n - 1, n * a);
}

int main (){
  unsigned int n=3;
  int a=1;
  factTail(n,a);
  printf("%d", n);
	
}

