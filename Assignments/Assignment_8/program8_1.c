/*
    Function Name : Numbers
    Description : It Displays Numbers is Small , medium , large

    Input : Int 
    OutPut : string
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if((iNo > 0) && (iNo <= 50))
    {
        printf("Number is small\n");
    }
    else if ((iNo > 51) && (iNo <=100))
    {
        printf("Number is Medium\n");
    }
    else if (iNo > 100)
    {
        printf("Number is Large\n");
    }

    
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}