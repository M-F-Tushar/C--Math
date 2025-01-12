#include <stdio.h>
int main()
{
    int a = 4, b = 5, c = 3;
    printf("%d\n", a < b > c);
    return 0;
}
/* The relational operators are left associative and, as shown in Appendix A,
the operators < and > have the same precedence, so the program frst checks to see
whether a is less than b. The value of this expression is 1 since a is 4 and b is 5.
Therefore, the expression a < b > c is equivalent to 1 > c, which is not true since
the value of c is 3. As a result, the program displays 0.*/
