#include <stdio.h>

int main()
{
    int i, result, n;

    printf("enter the number");
    scanf("%d", &n);
    result = 0;

    for (i = 0; i < n; i++)
    {
        result = result + i;
    }

    printf("%d", result);

    return 0;
}

//here the loop depends of n .loop one