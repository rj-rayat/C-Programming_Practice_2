#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int length = strlen(s);

    int i = 0;
    int j = length - 1;
    

    int isPelindrom = 1;
    while(i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        

        if (s[i] != s[j])
        {
            isPelindrom = 0;
            break;
        }
        else
        {
            isPelindrom = 1;
        }

        i++;
        j--;

    }
    if (isPelindrom == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;


}