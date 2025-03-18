#include <stdio.h>
#include <string.h>
int main()
{
    int size1, size2;
    printf("Enter size of the first string:");
    scanf("%d", &size1);
    printf("Enter size of the Second string:");
    scanf("%d", &size2);
    char str1[size1];
    char str2[size2];
    printf("Enter First String:");
    scanf(" %[^\n]", str1);
    printf("Enter Second String:");
    scanf(" %[^\n]", str2);
    int op;
    printf("1.Using strcmp Function\n2.Using Manual method\nChoose option:");
    scanf("%d", &op);
    if (op == 1)
    {
        if (strcmp(str1, str2) == 0)
        {
            printf("Both Strings Are Same...\n");
        }
        else
        {
            printf("Both Strings Are Different...\n");
        }
    }
    else if (op == 2)
    {
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        if (len1 != len2)
        {
            printf("Both Strings Are Different...\n");
        }
        else
        {
            int flag = 1;
            for (int i = 0; i < len1 || i < len2; i++)
            {
                if (str1[i] != str2[i])
                {
                    printf("Both Strings Are Different...\n");
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                printf("Both Strings Are Same...\n");
            }
        }
    }
}