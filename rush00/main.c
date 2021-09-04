#include <stdio.h>

/*int rush (int col, int row)
{
    int table[][row]
}*/
int main()
{

    int const rows = 4;
    int const columns = 5;
    char studentGrades[rows][columns] = {
                            {'o','-', '-', '-','o'},
                            {'|', '-', '-', '-', '|'},
                            {'|', '-', '-', '-', '|'},
                            {'o', '-', '-', '-', 'o'},
                            };  //atleast columns is required
                                //in declaration

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < columns; k++)
        {
            printf("%c", studentGrades[i][k]);
        }
        printf("\n");
    }
    
    //Arrays don't have to contain ints, just easiest to start with
    //All data does need to be same type, though

    return 0;
}