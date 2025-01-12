#include<stdio.h>
int main()
{
    int a = 3, b = 5,c;

    a = (a > 3) + (b <= 5);
    b = (a ==3) + ((b-2) <= 3);
    c = (b != 1);
    printf("%d%d%d\n", a,b,c);
    return 0;
}
/* The value of the expression (a > 3) is 0 since a is 3. The value of the expres￾
sion (b <= 5) is 1 since b is 5. Therefore, a = 0+1 = 1.
The value of the expression (a == 3) is 0 since a is 1. The value of the expression
((b−2) >= 3) is 1 since b−2 = 5−2 = 3. Therefore, b = 0+1 = 1.
*/
