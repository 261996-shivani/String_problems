#include<stdio.h>
#include<string.h>

void reverse_string(char *str)
{
    int size = strlen(str);
    for (int i = 0; i < size / 2; i++)
    {
        int t = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = t;
    }
}
void my_itoa(int val,char *str)
{
    int rem;
    int i = 0;
    while(val)
    {
        rem = val % 10;
        str[i++] = rem+'0';
        val=val/ 10;
    }
    str[i++] = '\0';

    reverse_string(str);
    
}
int main()
{
    int val = 12345;
    char str[20];
    my_itoa(val, str);
    printf("Conversion of integer to string :%s\n", str);
}