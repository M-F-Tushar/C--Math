#include <stdio.h>
int main()
{
    int a = 2, b = 2, c = 2;
    printf("%d\n", a == b == c);
    return 0;
}
/*: First, the program checks to see whether a is equal to b. The value of this expres￾
sion is 1 since both a and b equal 2. Therefore, the expression a == b == c is equiva￾
lent to 1 == c, which is not true since the value of c is 2 and the program displays 0.
If the value of c were 1 instead of 2, the program would display 1.*/
