#include <stdio.h>
#include <unistd.h>

int rush(int columns, int rows) {
    int irow;
    int icol;
    irow = 0;
    
    while (irow < rows)
    {
       icol = 0;
        while (icol < columns)
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
            icol++;
        
          
        }
        printf("\n");
        irow++;
    }
}

int main()
{

    int const rows = 5;
    int const columns = 2; 
    rush(columns, rows);
    
    
    //Arrays don't have to contain ints, just easiest to start with
    //All data does need to be same type, though

    return 0;
}