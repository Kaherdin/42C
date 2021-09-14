#include <stdio.h>
#include <string.h>

//https://www.geeksforgeeks.org/enumeration-enum-c/
enum e_week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

//https://www.tutorialspoint.com/cprogramming/c_typedef.htm
typedef struct t_Book
{
	char	title[50];
	char	author[50];
	char	subject[100];
	int		book_id;
}	t_Book;

//https://www.geeksforgeeks.org/union-c/
union test {
    int x, y;
};
  
int union_test()
{
    // A union variable t
    union test t;
  
    t.x = 2; // t.y also gets value 2
    printf("After making x = 2:\n x = %d, y = %d\n\n",
           t.x, t.y);
  
    t.y = 10; // t.x is also updated to 10
    printf("After making y = 10:\n x = %d, y = %d\n\n",
           t.x, t.y);
    return 0;
}
  
int weeks()
{
    enum e_week day;
    day = Wed;
    printf("%d",day);
    return 0;
} 


int	main(void)
{
	t_Book	book;

	strcpy(book.title, "C Programming");
	strcpy(book.author, "Nuha Ali");
	strcpy(book.subject, "C Programming Tutorial");
	book.book_id = 6495407;
	printf("Book title : %s\n", book.title);
	printf("Book author : %s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book book_id : %d\n", book.book_id);

	weeks();
	union_test();
	return (0);
}
