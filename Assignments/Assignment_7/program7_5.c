/*
    Function Name : Display
    Description : It Displays first 5 Multiples

    Input : Int
    OutPut : Int
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int i = 0;

    for(iCnt =1 ; iCnt <=5 ; iCnt++)
    {
        i = iCnt * iNo;
        printf("%d\t",i);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}