#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char text[MAX_SIZE]; /* Declares a string of size 100 */
    int i;
    clrscr();

    /* Input a string from user */
    printf("Enter any string: ");
    gets(text);

    printf("\n\nLength of '%s' = %d", text, strlen(text));
    strupr(text);
    printf("\n\nstring in Upper case : %s",text);
    strrev(text);
    printf("\n\nstring in reverse order  : %s",text);

    getch();
    return 0;
}