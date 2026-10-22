#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary , int iYears)
{
    float fBonus = 0.0f;

    if((iYears > 10) && (fSalary > 0))
    {
         fBonus =(fSalary * 15)/100;
         printf("Bonus :%.2f\n",fBonus);
    }
    else if ((iYears > 5) && (iYears < 10) && (fSalary > 0))
    {
         fBonus =(fSalary * 10)/100;
         printf("Bonus :%.2f\n",fBonus);
    }
     else if ((iYears > 0) && (iYears < 5) && (fSalary > 0))
    {
         fBonus =(fSalary * 5)/100;
         printf("Bonus :%.2f\n",fBonus);
    }
    else
    {
        printf("Invalid Salary or Age\n");
    }
  
    
    
}

int main()
{
    int iYears = 0;
    float fSalary = 0.0f;

    printf("Enter Salary and Years\n");
    scanf("%f %d",&fSalary,&iYears);

    
    CalculateBonus(fSalary , iYears);

    return EXIT_SUCCESS;
}