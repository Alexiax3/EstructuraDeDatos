#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *pv;  
    int i;
     pv = (int*)malloc(10 * sizeof(int));
     
        for(i=1; i<=10; i++) {  
	        pv[i] = 2*i;
	        //printf("\n %d", pv[9-i]);
        }
        
        for (i=9; i>=0; i--){
            printf("\n %d", pv[i]);
        
    free (pv);

    return 0;
}

