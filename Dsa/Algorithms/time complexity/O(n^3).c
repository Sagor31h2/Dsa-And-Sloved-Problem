#include <stdio.h>

int main()
{
    int i, j, n, k, count;

    printf("enter the number : ");
    scanf("%d", &n);

    count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                count = count + 1;
            }
        }
    }
    printf("N=%d, count= %d\n", n, count);

    return 0;
}

// here the value depnds on cube value of n. so time complexity is n cube