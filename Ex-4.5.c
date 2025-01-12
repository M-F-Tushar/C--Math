#include <stdio.h>
int main()
{
    int a = 4, b = 3, c = 1;
    a += b −= ++c;
    printf("%d %d %d\n", a, b, c);
    return 0;
}
/*The compound operators are executed from right to left, as shown
in Appendix A. Therefore, the expression a += b −= ++c; is equivalent to
a = a+(b −= ++c); By itself, the expression (b −= ++c) is equivalent to b = b−
(++c). The value of c is frst incremented and becomes 2, therefore b = b−2 = 3−2
= 1. Now, the expression a = a+(b −= ++c) becomes equivalent to a = a+1 =
4+1 = 5. As a result, the program displays 5 1 2.
