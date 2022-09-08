#include <stdio.h>
#include <stdlib.h>
int main()
{
    // pv= used to creat our first array
    int *pv;  
    // i = used by for
    int i;
     pv = (int*)malloc(10 * sizeof(int));
     
        for(i=1; i<=10; i++) {  
    // creating the arry with pars 
     printf("\n\n\t PARS ARRAY");
        for(i=0; i<10; i++) {  
	        pv[i] = 2*i;
	        //printf("\n %d", pv[9-i]);
	        //printf("\n %d", pv[10-i]);
        }
    
    // printng array 
    
    i=0;
        for (i=0; i<=9; i++){
            printf("\n %d", pv[9-i]);
        }
        
    // el numero de cuenta es 422068044 y su ultimo digito es 4
        pv[4]=-1;
      printf("\n\n\t NEW ARRAY");   
    i=1;
        for (i=1; 10>i; i++){
            printf("\n %d", pv[i]);
        }   
        
    free (pv);

    return 0;
}

