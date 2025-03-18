#include <stdio.h>
int panagram(char *s)
{
    int arr[26] = {0};
    for (int i = 0; s[i]; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            arr[s[i] - 'a'] = 1;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            arr[s[i] - 'A'] = 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[] = "The quick brown fox jumps over the lazy dog";
    if (panagram(str))
    {
        printf("This string is Panagram String.\n");
    }
    else
    {
        printf("This string is not Panagram String.\n");
    }
}