#include<stdio.h>
#include<string.h>
int main()
{
    int size;
    printf("Enter Size of the string:");
    scanf("%d", &size);
    char str[size];
    printf("Enter String:");
    scanf(" %[^\n]", str);

    int len = strlen(str);
    for (int i = 0; i < len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            printf("This String is not Palindrome\n");
            return 0;
        }
    }
    printf("This String is Palindrome.\n");
}