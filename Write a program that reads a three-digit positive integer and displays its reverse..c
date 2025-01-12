#include <stdio.h>
int main()
{
    int i;
    printf("Enter number between 100 and 999: ");
    scanf("%d", &i);
    printf("%d\n", 100*(i%10) + 10*(i%100/10) + i/100);
    return 0;
}
