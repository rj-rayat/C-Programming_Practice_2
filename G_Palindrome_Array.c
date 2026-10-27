#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

   

    if (n > 0 && n <= 100000)
    {
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int i = 0;
        int j = n -1;

        int isPelindrom = 1;
        while (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;

            if (a[i] != a[j] )
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
        };

        if (isPelindrom == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
            
    }
    else
    {
        return 0;
    }
    

    
}