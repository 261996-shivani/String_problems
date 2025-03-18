#include <stdio.h>
#include <string.h>
int main()
{
    int size1;
    printf("Enter size of the first string:");
    scanf("%d", &size1);
   
    char str1[size1];
    char str2[100];
    printf("Enter First String:");
    scanf(" %[^\n]", str1);
    
    int op;
    printf("1.Using strcpy Function\n2.Using Manual method\nChoose option:");
    scanf("%d", &op);
    if (op == 1)
    {
        strcpy(str2, str1);

        printf("After Copy Str1 to str2  :%s ...\n", str2);
    }
    else if (op == 2)
    {
        int len1 = strlen(str1);
        

        
        for (int i = 0; i <= len1; i++)
        {
            str2[i] = str1[i];
        }
        str2[len1] = '\0';
        printf("After Copy Str1 to str2  :%s ...\n", str2);
    }
}
