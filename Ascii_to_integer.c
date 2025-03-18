#include <stdio.h>
int myATOI(char *str)
{
    int res = 0;
    for (int i = 0; str[i]; i++)
    {
        res = res * 10 + (str[i] - '0');
    }
    return res;
}
int main()
{
    char str[] = "12345";
    int res = myATOI(str);
    printf("After Converting Ascii to Integer: %d\n", res);
}