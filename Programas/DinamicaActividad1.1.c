#include <stdlib.h> 
#include <stdio.h>

int main() 
{ 

	int filas = 10;
	int columnas ;	
	int **x;	
    int *n;
	int i;	 // Recorre filas 
	int j;	 // Recorre columnas 
    int a;
    n = (int *)malloc(filas*sizeof(int*)); 
    if (n == NULL)
	return -1;
	
	// Reserva de Memoria 
	x = (int **)malloc(filas*sizeof(int*)); 
	if (x == NULL)
	return -1;
	
	for (i=0;i<filas;i++) {
	    printf("\n\t%d, digit: ",i);
		scanf("%d", &a);
	    x[i] = (int*)malloc(a*sizeof(int)); 
	    if (x[i] == NULL)
    	return -1;
    	
	    n[i]=a;
	    // Damos Valores a la Matriz 
	    for(j=0;j<a;j++){
	        x[i][j]=a;

	    }
	}

	// Dibujamos la Matriz en pantalla 
	for (i=0; i<filas; i++) 
	{ 
		printf("\n------------------------------------------------------------------------------------------------------------------------------------\n"); 
		for (j=0; j<n[i]; j++) 
		if (n[i!=0])
			printf("\t%d\t|", x[i][j] ); 
	} 
	
	for(i=0; i<filas; i++)
    	free(x[i]);
    	
    free (x);
    free (n);
	
	return 0; 
} 


