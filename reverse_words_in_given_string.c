#include <stdio.h>
#include <string.h>
void reverse_string(char *str, int start, int end)
{
    while (start < end)
    {
        char t = str[start];
        str[start] = str[end];
        str[end] = t;
        start++;
        end--;
    }
}
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d", &size);
    char str[size];
    printf("Enter String:");
    scanf(" %[^\n]", str);

    int start = 0;
    int end = strlen(str);
    reverse_string(str, start, end - 1);

    for (int i = 0; i <= end;i++)
    {
        if(str[i]==32 || str[i]=='\0')
        {
            reverse_string(str, start, i - 1);
            start = i + 1;
        }
    }
        printf("Reversed words in given String: %s", str);
}