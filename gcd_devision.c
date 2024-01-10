#include <stdio.h>

int gcd(int a, int b)       // Function to return gcd of a and b
{
	if (a == 0)                            // let a=91 b=26                    let a=35 b=10
    {                                    // 91%26=13                         35%10=5
		return b;                            // 13%13=0                          10%5=5
    }                                    // so it will return b=13           5%5=0
	return gcd(b % a, a);                                                   // so it will return b=5
}

int main()
{
	int a,b;

    printf("enter numbers to find GCD :\n");

    printf("a = ");
    scanf("%d",&a);

    printf("b = ");
    scanf("%d",&b);

    //function call to print GCD.
    printf("GCD(%d,%d) = %d",a,b,gcd(a,b));

	return 0;
}




