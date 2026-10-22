/*
    step 1 : understand the problem satement
    step 2 : write the algorithm
    step 3 : Decide the Programming langauge 
    step4  : Write the Progarm
    step 5 : Test The Progarm

*/

//////////////////////////////////////////////////////
//
// Step 1 : Understand the problem satement
//              User is going to enter any 2 integer 
//              And we have to perform addition
//
//
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//
/* Step 2 :     write the algorithm
//              Accept First number As No1
                Accept Second number As No2
                Create the variable as ANs to store result
                Perform the addition and store into Ans
                Display the Result From ANS
//
*/
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//
//  step 3 : Decide the Programming langauge 
//          We Select C progarmming
//
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//
//step4  : Write the Progarm
//
//////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNO1 , int iNO2)
{
    int iANS = 0;
     iANS = iNO1 + iNO2;          //Business Logic

     return iANS;
}
int main()
{

    int iValue1 = 0 , iValue2 = 0, iResult = 0;

    printf("Enter First NUmber:\n");
    scanf("%d",&iValue1);

    printf("Enter Second NUmber:\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);
    
    printf(" Addition is :%d\n",iResult);

    return 0;
}