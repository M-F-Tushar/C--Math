#include <stdio.h>
int main()
{
    int a = 4, b = 3, c = 5;
    printf("%d\n", (a < b) == !(c > b));
    return 0;
}
/* The value of the expression (a < b) is 0 since a is 4 and b is 3. Similarly, the
value of the expression (c > b) is 1. Therefore, the value of the expression !(c > b)
is 0. Since the two expressions have the same value, the program displays 1.
