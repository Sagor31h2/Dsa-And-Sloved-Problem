#include <stdio.h>

int main()
{
    int i, j, n, count;

    printf("enter the number : ");
    scanf("%d", &n);

    count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            count = count + 1;
        }
    }
    printf("N=%d, count= %d\n", n, count);

    return 0;
}

// here the value depnds on squre value of n. so time complexity is n square