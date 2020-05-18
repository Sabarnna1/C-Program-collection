#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, temp;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i =1;i<= n;i++)
    {printf(" ,%d", t1);
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;}
        getchar();
    return 0;
}
