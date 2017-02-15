/*  combine code found cookie.c and even.c so that your program repeatedly asks the user to input a number,
 and your program will tell the user whether the number they entered was even or odd.
 The program ends when the user enters 0.   ++
 */

#include <stdio.h>
int main(void)
{
    int number = 0, loop = 0;
    char c = '?';
    
    while ((loop <= 10) || (number !=0)) // while the number isnt 0 or the loop is less than 10
    {
        printf("\nEnter an integer number: ");
        scanf(" %d", &number); // enter number
        if (number == 0) // if the number typed is 0
        {
            printf("ERRR INVALID\a\n");
            break; // end while loop
        }
        
        // conditional: if number has 0 remainder from divison by 2 the number is even, if not number is odd
        (number % 2 == 0) ? printf("Your number %d was EVEN eh%c\n", number, c) : printf("Your number %d was ODD huh%c\n", number, c);
        
        loop++; // add +1 to loop
        
        if (loop == 10) // if/when the loop is 10
        {
            printf("\nPlease purchase the full edition to continue using this program.\n");
            break; // end while loop
        }
    }
    printf("\nPROGRAM COMPLETE. BYE BYE NOW!\n\n");
    return 0;
}