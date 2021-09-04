#include <stdio.h>

/*int rush (int col, int row)
{
    int table[][row]
}*/
int main()
{

    int rows = 4;
    int const columns = 4;
    char studentGrades[][columns] = {
                            {"o", "A", "-", "-","o"},
                            {"|", "-", "-", "-", "o"},
                            {"|", "-", "-", "-", "o"},
                            {"o", "-", "-", "-", "o"},
                            };  //atleast columns is required
                                //in declaration

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < columns; k++)
        {
            printf("%c\t", studentGrades[i][k]);
        }
        printf("\n");
    }
    
    //Arrays don't have to contain ints, just easiest to start with
    //All data does need to be same type, though

    return 0;
}