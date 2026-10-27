#include <stdio.h>
#include <string.h>
int main()
{
    char a[11];
    scanf("%s", a);
    char b[11];
    scanf("%s", b);

    int a_length = strlen(a);
    int b_length = strlen(b);

    printf("%d %d\n",a_length, b_length);
    printf("%s%s\n", a, b);

    char first_digit_b = b[0];
    char first_digit_a = a[0];

    char temp = a[0];
    a[0] = first_digit_b;
    b[0] = temp;
    
    printf("%s %s\n", a, b);
    return 0;
}