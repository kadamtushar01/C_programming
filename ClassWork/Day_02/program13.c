#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////
//
// Function Name :  Addition
// Input :          Integer , Integer
// Output :         Integer    
// Description :    Performs Addition
// Date :           04/10/2026
// Author :         Tushar Somnath Kadam
//
//////////////////////////////////////////////////////

int Addition(
                int iNO1,         //First input
                int iNO2          //Second Input
            )
{
    int iANS = 0;
     iANS = iNO1 + iNO2;          //Business Logic

     return iANS;
}

//////////////////////////////////////////////////////
//
// Entery Point OF the Application
//
//////////////////////////////////////////////////////
int main()
{

    int iValue1 = 0 , iValue2 = 0, iResult = 0;

    printf("Enter First NUmber:\n");
    if(scanf("%d",&iValue1) !=1)
    {
        fprintf(stderr,"Unable to Proceed as Input is invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter Second NUmber:\n");
     if(scanf("%d",&iValue2) !=1)
    {
        fprintf(stderr,"Unable to Proceed as Input is invalid\n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1,iValue2);
    
    printf(" Addition is :%d\n",iResult);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//
// step 5 : Test The Progarm
//
// Tested Tase Cases 
// 
// Input1       Input2      Output
// 11              11          22
// 11               0          11
// 0               11          11
// 20              -9          11
// -9              -10        -19
//
//////////////////////////////////////////////////////