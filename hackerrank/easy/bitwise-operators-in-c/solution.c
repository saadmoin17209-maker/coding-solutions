#include <stdio.h>

int main()
{
    int n, k;
    int max_and = 0, max_or = 0, max_xor = 0;

    scanf("%d %d", &n, &k);

    for (int a = 1; a <= n; a++)
    {
        for (int b = a + 1; b <= n; b++)
        {
            if ((a & b) < k && (a & b) > max_and)
                max_and = a & b;

            if ((a | b) < k && (a | b) > max_or)
                max_or = a | b;

            if ((a ^ b) < k && (a ^ b) > max_xor)
                max_xor = a ^ b;
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);

    return 0;
}
