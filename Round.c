#include<stdio.h>
#include<math.h>
int main()
{
    double x = 5.35;
    double y = 5.65;
    double result = round(x);
    double result2 = round(y);

    printf("round(%lf) = %lf\n",x,result);
    printf("round(%lf) = %lf\n",y,result2);
}
