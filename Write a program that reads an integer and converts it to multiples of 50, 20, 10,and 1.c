//Write a program that reads an integer and converts it to multiples of 50, 20, 10, and 1. For example, if the user enters the number 285, the program should display 5*50,1*20,1*10,5*1.
#include <stdio.h>
int main()
{
    int i, n_50, n_20, n_10, n_1, rem;
    printf("Enter number: ");
    scanf("%d", &i); /* Assume that the user enters the number 285, so i = 285. */
    n_50 = i/50; /* n_50 = 285/50 = 5. */
    rem = i%50; /* The rem = 285 % 50 = 35 should be analysed in 20s, 10s and singles. */
    n_20 = rem/20; /* n_20 = 35/20 = 1. */
    rem = rem%20; /* The rem = 35 % 20 = 15 should be analysed in 10s and singles. */
    n_10 = rem/10; /* n_10 = 15/10 = 1. */
    n_1 = rem%10; /* n_1 = 15%10 = 5. */
    printf("%d*50,%d*20,%d*10,%d*1\n", n_50, n_20, n_10, n_1);
    return 0;
}
