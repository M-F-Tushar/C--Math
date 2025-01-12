#include<stdio.h>
#include<math.h>
int main()
{
    double x = 2.35;
    double y = 2.65;
    double result = ceil(x);//up
    double result2 = ceil(y);

    printf("ceil(%lf) = %lf\n",x,result);
    printf("ceil(%lf) = %lf\n",y,result2);
}
