#include<stdio.h>
#include<stdlib.h>

void CalulateElectricityBill(int iUnits)
{
    float fBills = 0.0f;
    float ret1 = 0.0f;
    float ret2 = 0.0f;
    float ret3 = 0.0f;

    if(iUnits <= 100)
    {
       ret1 = (iUnits*5);
       fBills = ret1;
        printf("bill is :%.2f\n",fBills);

    }
    else if ((iUnits > 100) && (iUnits <= 200))
    {
        ret1 = 100 * 5;
     ret2 = ((iUnits - 100) *7); 
     fBills = ret1 + ret2;
      printf("bill is :%.2f\n",fBills); 
    }
    else
    {
        ret1 = 100*5;
        ret2 = 100 *7;
        ret3 = ((iUnits - 200) *10);
        fBills = ret1+ret2+ret3; 
      printf("bill is :%.2f\n",fBills); 
    }
    
}
int main()
{
    int iUnits = 0;

    printf("Enter Consumed Units\n");
    scanf("%d",&iUnits);

    CalulateElectricityBill(iUnits);

    return EXIT_SUCCESS;

}