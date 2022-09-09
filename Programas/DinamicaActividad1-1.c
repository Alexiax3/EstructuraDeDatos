#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int a, j;
    int rows = 10;  
    int **matrix ;
    *matrix= (int **) malloc(rows * sizeof(int *));  
    
        if (*matrix == NULL)
	        return -1;
        
        for (i = 0; i < rows ; i++) {  
            printf("\n\t%d, digit: ",i);
		    scanf("%d", &a);
        	matrix[i] = (int *) malloc(a * sizeof(int)); 
        	
        	
        	 if (matrix == NULL)
	            return -1;
        	
        	for(j = 0; j < a; j++){
        	    //memset(void *str, int c, size_t n)
        	    memset(matrix,a , a);
        	    //matrix[j]=a;
        	}
        	
        }
             
        for (i=0;  i < rows; i++){
            free (matrix[i]); 
        }
        free (*matrix);
}

