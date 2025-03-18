#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of the string:");
    scanf("%d", &size);
    char str[size];

    printf("Enter string:");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        
        str[i] = str[i] - 32;
        
    }
    printf("Updated String : %s", str);
}