#include<stdio.h>
int main()
{
    int m,n,r;
    printf("m = ");
    scanf("%d",&m);
    printf("n = ");
    scanf("%d",&n);

    if( m > n)
    {
    printf("gcd of (%d,%d) is = ",m,n);    // m = n X q + r   let m = 35 n = 10
    for(; m % n != 0;)                     // 35 = 10 X 3 + 5   
    {                                      // now, r = 5, m = 10 = n, n = 5 = r
        r = m % n;                         // 10 = 5 X 2 + 0   here, m = 10, n = 5 and r = 0 so, loop stops. 
        m = n;                             // gcd of m,n is n=5
        n = r;
    }
    printf("%d",n);
    }
    else if( n > m)
    {
        printf("gcd of (%d,%d) is = ", m, n);
        for (; n % m != 0;)
        {
            r = n % m;
            n = m;
            m = r;
        }
        printf("%d", m);
    }
    else
    {
        printf("gcd of (%d,%d) is = %d",m,n,m);
    }
return 0;
    }

    