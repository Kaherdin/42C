#include <stdio.h>

/*int rush (int col, int row)
{
    int table[][row]
}*/

int rush(int columns, int rows) {
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
                }
                else {
                    printf(" ");
                }
               
            }
        
          
        }
        printf("\n");
    }
}

int main()
{

    int const rows = 10;
    int const columns = 4; 
    rush(rows, columns);
    
    
    //Arrays don't have to contain ints, just easiest to start with
    //All data does need to be same type, though

    return 0;
}