/*
    Function Name : KMtoMeter
    Description : It converts kilometer to meter

    Input : int
    OutPut : int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNO)
{
    int iMeter = 0;

    iMeter = iNO * 1000;
    
    return iMeter;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Total Meter is :%d\n",iRet);

    return EXIT_SUCCESS;
}