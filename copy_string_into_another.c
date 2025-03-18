#include <stdio.h>
int main()
{
    int size;
    printf("Enter Size of the string:");
    scanf("%d", &size);
    char str1[size];
    printf("Enter String:");
    scanf(" %[^\n]", str1);
    char str2[size];
    for (int i = 0; i < size; i++)
    {
        str2[i] = str1[i];
    }
    printf("Copied String is: %s", str2);
}