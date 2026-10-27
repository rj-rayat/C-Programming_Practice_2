#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s", s);
    int length = strlen(s);
    for (int i =0; i < length; i++)
    {
        char emp[length];
        if (s[i] < 97 && s[i]  >= 65)
        {
            emp[i] = s[i] + 32;
        }
        if (s[i] >= 97 && s[i] <= 122)
        {
            emp[i] = s[i] - 32;
        }

        if (s[i] == 44)
        {
            emp[i] = 32;
        }
        
        printf("%c", emp[i]);
    }

    
}