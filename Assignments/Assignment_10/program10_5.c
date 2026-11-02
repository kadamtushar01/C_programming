/*
    Function Name : SquareMeter
    Description : It converts square feet into square meter

    Input : int
    OutPut : double
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dSmeter =0.0;

    dSmeter = iValue * 0.0929;
    
    return dSmeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square meter  is :%lf\n",dRet);

    return EXIT_SUCCESS;
}