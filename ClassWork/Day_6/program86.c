/*
------------------------------------------------
                    Operation ||
------------------------------------------------
    Result1         Result2       Result3
------------------------------------------------
    True            True            True    //short circuit
    True             False          true    //short circuit
    False            True            true
    false            false            false
------------------------------------------------

*/

#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if((iNo % 5 ==0) || (iNo % 3 ==0))

    {
        printf("Number is divisible ");
    }
    else
    {
        printf("Number is not divisible");
    }
}

int main()
{
    int iValue =0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;
}