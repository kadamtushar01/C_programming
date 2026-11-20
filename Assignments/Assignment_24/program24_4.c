#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iRet = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iRet = iCount;
        }

        iCount++;
        str++;
    }

    return iRet;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string\n");
    scanf(" %19[^\n]", arr);

    printf("Enter the character\n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}