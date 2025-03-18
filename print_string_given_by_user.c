#include<stdio.h>
int main()
{
    int size;
    printf("Enter Size for String:");
    scanf("%d", &size);
    char str[size];
    printf("Enter String:");
    scanf(" %[^\n]", str);
    printf("String Which you inserted: %s", str);
}