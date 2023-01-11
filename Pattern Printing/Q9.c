//Mirrored Right Triangle Star Pattern
//Mirrored Right Triangle Star Pattern


#include <stdio.h>

int main()
{
    int i, j, rows;

   
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

     
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }
    
    return 0;
}