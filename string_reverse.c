#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[1000], rev[1000];
    int i, j,count = 0;
    printf("Enter the string:");
    scanf("%6s", str);

    while (str[count] != '\0')
    {
        count++;
    }
    j = count - 1;

    for (i = 0; i < count; i++)
    {
        rev[i] = str[j];
        j--;
    }
    rev[i]='\0';
    printf("\nreversed string is %s",rev);
    return 0;
}
