//Write a program that reads a two-digit positive integer and displays its reverse. Forexample, if the user enters the number 72, the program should display 27. Use a single integer variable.
#include<stdio.h>
int main()
{
    int i;

    printf("Enter number between 10 and 99 : ");
    scanf("%d", &i);
    printf("%d\n", 10*(i%10) + i/10);
    return 0;
}
