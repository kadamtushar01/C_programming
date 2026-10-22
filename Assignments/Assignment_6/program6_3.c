#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalbill = 0.0f;
    
    if((fAmount < 1000))
    {
       printf("Payable Amount is :%.2f\n",fAmount);
    }
    else if ((fAmount > 1000) && (fAmount <5000))
    {
        fDiscount = (fAmount * 10) / 100;
        fFinalbill = fAmount - fDiscount;

        printf("payable Amount is :%.2f\n",fFinalbill);
    }
     else if ((fAmount >= 5000))
    {
        fDiscount = (fAmount * 20) / 100;
        fFinalbill = fAmount - fDiscount;

        printf("payable Amount is :%.2f\n",fFinalbill);
    }
    
    
}
int main()
{
    float fAmount =0.0f;

    printf("Enter The Amount\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;

}