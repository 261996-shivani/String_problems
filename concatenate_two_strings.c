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
    printf("1.Using strcat Function\n2.Using Manual method\nChoose option:");
    scanf("%d", &op);
    if (op == 1)
    {
        strcat(str1, str2);

        printf("After Concatenate both String Using strcat function :%s ...\n", str1);
    }
    else if (op == 2)
    {
        int len1 = strlen(str1);
        int len2 = strlen(str2);

        //len1--;
        for (int i = 0; i < len2; i++)
        {
            str1[len1 + i] = str2[i];
        }
        str1[len1 + len2] = '\0';
        printf("After Concatenate both String Using manual method:%s ...\n", str1);
    }
}
