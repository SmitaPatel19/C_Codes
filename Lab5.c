#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001

// Function to evaluate the polynomial at a given point x
double polynomial_evaluation(double coefficients[], int order, double x)
{
    double result = 0;
    for (int i = 0; i <= order; i++)
    {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}

// Derivative of the polynomial
double derivative(double coefficients[], int order, double x)
{
    double h = 0.0001; // Step size for numerical differentiation
    return (polynomial_evaluation(coefficients, order, x + h) - polynomial_evaluation(coefficients, order, x)) / h;
}

// Newton-Raphson Method
double newton_raphson(double coefficients[], int order, double initial_guess)
{
    double x0 = initial_guess;
    double x1;

    do
    {
        x1 = x0 - polynomial_evaluation(coefficients, order, x0) / derivative(coefficients, order, x0);
        if (fabs(x1 - x0) < EPSILON) // Check if the difference is within tolerance
            break;
        x0 = x1;
    } while (1);

    return x1;
}

// Regula Falsi Method
double regula_falsi(double coefficients[], int order, double x0, double x1)
{
    double f0 = polynomial_evaluation(coefficients, order, x0);
    double f1 = polynomial_evaluation(coefficients, order, x1);
    double x2, f2;

    do
    {
        x2 = (x0 * f1 - x1 * f0) / (f1 - f0);
        f2 = polynomial_evaluation(coefficients, order, x2);

        if (f2 == 0.0 || fabs(x2 - x1) < EPSILON)
            break;

        if (f2 * f1 < 0)
            x0 = x2;
        else
            x1 = x2;

        f0 = polynomial_evaluation(coefficients, order, x0);
        f1 = polynomial_evaluation(coefficients, order, x1);
    } while (1);

    return x2;
}

int main()
{
    int order;
    printf("Enter the order of the polynomial: ");
    scanf("%d", &order);

    double coefficients[order + 1];
    printf("Enter the coefficients of the polynomial (from highest order to lowest):\n");
    for (int i = order; i >= 0; i--)
    {
        scanf("%lf", &coefficients[i]);
    }

    double initial_guess;
    printf("Enter initial guess for the root: ");
    scanf("%lf", &initial_guess);

    double root_nr = newton_raphson(coefficients, order, initial_guess);
    double root_rf = regula_falsi(coefficients, order, initial_guess - 1, initial_guess + 1);

    printf("Root by Newton-Raphson method: %lf\n", root_nr);
    printf("Root by Regula Falsi method: %lf\n", root_rf);

    return 0;
}

// #include <stdio.h>
// #define Epsilon 0.1;

// int main()
// {

//     int n, prev1,prev2;
//     printf("Enter order of polynomial : ");
//     scanf("%d", &n);

//     int coef[n+1];
//     printf("Enter coefficients of : \n");
//     for (int i = 0; i <= n; i++)
//     {
//         printf("x^%d : ", i);
//         scanf("%d", &coef[i]);
//     }

//     printf("Entered equation is : ");
//     for(int i=n;i>=0;i--){
//         printf("%dx^%d",coef[i],i);
//         if(i!=0){
//             printf(" + ");
//         }
//     }

//     printf("Enter prev x^0 : ");
//     scanf("%d",prev1);

//     printf("Enter prev x^-1 : ");
//     scanf("%d",prev2);

//     return 0;
// }