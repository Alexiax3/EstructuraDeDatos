//STUDETS - DINAMIC MEMORY
#include <stdio.h>
#include <stdlib.h>

// Struck used to creat the row of the tab
typedef struct{
    char name[25];
    int age;
    int grade;
}student;
    


int main()
{
    student *n;
    float sumage, sumgrade;
    unsigned int numst, i;
    
    printf("\n\n\t\t\t\t\tSTUDETS - DINAMIC MEMORY  ");

    // get number of students
    printf("\n\n\tNumber of students:  ");
    scanf("%d",&numst);
    
    // create columns for the tab
    n = (student *)malloc(numst*sizeof(student)); 
    if (n == NULL)
	        return -1;
    
    //get data
    for ( i=1; i<=numst; i++){
        printf("\n\n\n\t\t\tSTUDENT %d", i);
        
        fflush(stdin);
        printf("\n\n\tName of the student:  ");
        gets(n[i].name);
        printf("\n\tAge of the student:  ");
        scanf("%d",&n[i].age);
        printf("\n\tGrade of the student :  ");
        scanf("%d",&n[i].grade);
        
        //used to calculate average
        sumage=sumage+n[i].age;
        sumgrade=sumgrade+n[i].grade;
    }
    
    printf("\n\n\tnum |   age  |grade| 	name");
    printf("\n--------------------------------------------------------");
    for ( i=numst; i>0; i--){
    	
        printf("\n\t%d", i);
        printf("\t  %d",n[i].age);
        printf("\t %d",n[i].grade);
        printf("\t %s",n[i].name);
        printf("\t");
    }
    
    //averages
    sumage=sumage/numst;
    sumgrade=sumgrade/numst;
    
    printf("\n\n\tGroup average: %.2f", sumgrade);
    printf("\n\n\t\t\tAverage age: %.2f", sumage);
    
    free(n);

    return 0;
}
