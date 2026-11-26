#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iValue =0;
    int icnt =0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    for(icnt = 1;icnt<=iValue;icnt++)
    {
        printf("%d",icnt);
    }


    return EXIT_SUCCESS;
}