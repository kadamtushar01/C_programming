/*
    Function Name : FhtoCs
    Description : It Converts temp in fahreheit to celsius

    Input : float 
    OutPut : double
    Author : Tushar Somnath Kadam
    Date : 02/11/2026

*/

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0/9.0);
    
    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahreheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Celsius is :%lf\n",dRet);

    return EXIT_SUCCESS;
}