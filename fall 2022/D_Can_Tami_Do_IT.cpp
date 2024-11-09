#include <stdio.h>
int main()
{
    int n, p, i;
    scanf("%d", &n);
    scanf("%d", &p);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int remaining = p;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        int numberofdays = remaining / a[i];
        if (numberofdays > 0)
        {
            d++;
            remaining -= a[i] * numberofdays;
        }
    }

    if (d == 1)
        printf("Tami will be back after %d day\n", d);
    else
        printf("Tami will be back after %d days\n", d);

    return 0;
}