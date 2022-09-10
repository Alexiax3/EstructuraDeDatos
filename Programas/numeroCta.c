#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i, j;
	
	
	char *num = argv[1];
	printf("Digite numero de cuenta: ");
	scanf("%s", argv[1]);


	fprintf(stdout, "arg[1] = %s \n", argv[1]);
	
	 
	
	for (i = 0; i < strlen(argv[1]); i++)
	for(j=0; j<num[i]; j++){
		fprintf(stdout, " %c \n", num[i]);
	}
	
	return 0;
}


