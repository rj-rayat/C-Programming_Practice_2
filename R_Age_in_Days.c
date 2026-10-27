#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int years = n / 365;
    int remaining = n % 365;
    int month = remaining / 30;
    int days = remaining % 30;

    printf("%d years\n", years);
    printf("%d months\n", month);
    printf("%d days\n", days);
}