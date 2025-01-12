#include<stdio.h>
#include<math.h>
int main()
{
    double x = 10.5;

    double result1 = log(x);
    double result2 = log10(x);
    double result3 = sin(x);

    printf("log(%lf) = %lf\n",x,result1);
    printf("log10(%lf) = %lf\n",x,result2);
    printf("sin(%lf) = %lf\n",x,result3);
}
