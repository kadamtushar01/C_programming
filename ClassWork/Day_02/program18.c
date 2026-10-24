#include<stdio.h>
#include<stdlib.h>

void CheackEven(int iNo)
{
     if((iNo % 2) == 0)
        {
            printf("Number is Even");
        }

        else
        {
            printf("Number is Odd");    
        }
}
int main()
{
        int ivalue = 0;

        printf("Enter Number\n");
        scanf("%d",&ivalue);

       CheackEven(ivalue);

    return EXIT_SUCCESS;
}