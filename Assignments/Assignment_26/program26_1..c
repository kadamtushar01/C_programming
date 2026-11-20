#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Decimal\tHexadecimal\tOctal\tSymbol\n");
    printf("------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t0X%02X\t\t%03o\t%c\n",
               iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}