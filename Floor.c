#include<stdio.h>
#include<math.h>
int main()
{
    double x = 2.35;
    double y = 2.65;
    double result = floor(x);//down
    double result2 = floor(y);

    printf("floor(%lf) = %lf\n",x,result);
    printf("floor(%lf) = %lf\n",y,result2);
}
