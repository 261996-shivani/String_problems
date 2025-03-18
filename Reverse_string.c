#include<stdio.h>

int main()
{
    int size;
    printf("Enter Size:");
    scanf("%d", &size);
    char str[size];
    printf("Enter String:");
    scanf(" %[^\n]", str);
    int i;
    for (i = 0; str[i];i++);
    for (int j = 0; j < i/2; j++)
    {
        char t = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = t;
    }
    printf("String After Reverse:%s", str);
}