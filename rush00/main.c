#include <stdio.h>

/*int rush (int col, int row)
{
    int table[][row]
}*/
int main()
{

    int const rows = 1;
    int const columns = 5; 
    for (int irow = 0; irow < rows; irow++)
    {
        for (int icol = 0; icol < columns; icol++)
        {
            if (irow == 0 || irow == rows - 1) {
                if (icol == 0 || icol == (columns - 1) ) {
                    printf("o");
                }
                else {
                    printf("-");
                }
            }
            else {
                if (icol == 0 || icol == columns - 1) {
                    printf("|");
                    //printf("%i", icol);
                }
                else {
                    printf(" ");
                }
               
            }
        
          
        }
        printf("\n");
    }
    
    //Arrays don't have to contain ints, just easiest to start with
    //All data does need to be same type, though

    return 0;
}