#include<stdio.h>
#include<string.h>
int main()
{
    char str[50] = "Ashutosh";
    int op;
    printf("Choose Option\n1.Using strlen function\n2.Using for loop\n3.Using while loop\n");
    scanf("%d", &op);
    if(op==1)
    {
        int size = strlen(str);
        printf("Size of the Given String \'%s\" is: %d", str,size);
    }
    else if(op==2)
    {
        int i;
        for (i = 0; str[i]; i++);
        printf("Size of the Given String \"%s\" is: %d",str, i);
    }
    else
    {
        int i = 0;
        while(str[i++]!='\0');
        printf("Size of the Given String with null character \"%s\" is: %d\n", str, i);

        i--;
        printf("Size of the Given String without null character \"%s\" is: %d", str, i);
    }
    

}