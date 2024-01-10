#include <stdio.h>

int fb(int x);

int main()
{
    int n;
    printf("enter number =");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d,", fb(i));
        if (fb(i) > n)
        {
            break;
        }
    }
    return 0;
}

int fb(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        int f = fb(x - 1) + fb(x - 2);
        return f;
    }
}