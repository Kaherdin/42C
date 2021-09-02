#include <stdio.h>

//From https://www.geeksforgeeks.org/strings-in-c-2/

// C program to illustrate how to 
// pass string to functions
  
void printStr(char str[])
{
    printf("String is : %s",str);
}
  
int main()
{   
    // declare and initialize string
    char str[] = "GeeksforGeeks";
      
    // print string by passing string
    // to a different function
    printStr(str);
      
    return 0;
}