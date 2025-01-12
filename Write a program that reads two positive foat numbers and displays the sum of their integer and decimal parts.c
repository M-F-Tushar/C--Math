//Write a program that reads two positive foat numbers and displays the sum of their integer and decimal parts.Use only two foat variables. For example, if the values 1.23 and 9.56 are entered, the program should display 10 and 0.79.
#include<stdio.h>
int main()
{
    double i,j;

    printf("Enter numbers : ");
    scanf("%lf%lf", &i, &j);
    printf("%d %f\n",(int)i+(int)j, (i-(int)i)+(j-(int)j));
    return 0;
}
