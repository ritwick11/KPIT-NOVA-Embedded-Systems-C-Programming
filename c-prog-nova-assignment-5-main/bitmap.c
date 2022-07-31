#include "bitmap.h"

//Complete other records in this array...

LoanApp LD1[MAX_SIZE] = {
{28,70000,2500000,6.8},
{35,80000,3500000,7.3},
{43,120000,4200000,7.4},
{38,145000,5500000,7.2},
{27,110000,5000000,6.75}
//complete other records here...
};

//Pointer creation and pointing to the array...
LoanApp *ptr = LD1;

/*

The function must calculate and return the average loan amount in the given record(record name: LoanApp)

*/

float AverageLoanAmount(const LoanApp *ptr, int length)
{   
    return (LD1[0].LoanAmount+LD1[1].LoanAmount+LD1[2].LoanAmount+LD1[3].LoanAmount+LD1[4].LoanAmount)/5;
}

/*

The function returns minimum age Value in the given records.

*/

unsigned int MinimumAge(const LoanApp *ptr, int length)
{
    unsigned int Minage=0;
    for(int i=0; i<length-1; i++)
    {
        if(LD1[i].PersonAge<LD1[i+1].PersonAge)
            {Minage = LD1[i].PersonAge;}
        else
            {Minage = LD1[i+1].PersonAge;}
    }
    return Minage;
}

/*

The functions returns the person income for the  highest loan amount in the given record.

*/

unsigned long IncomeForHighestAmount(const LoanApp *ptr, int length)
{
    long Income=0;	
	for(int i=0; i<length-1; i++)
    {
        if(LD1[i].LoanAmount>LD1[i+1].LoanAmount)
            {Income = LD1[i].PersonIncome;}
        else
            {Income = LD1[i+1].PersonIncome;}
        }
    return Income;
}

/* This method counts and returns the count value of the interest 
rate which is greater than or equal 7.0 percent in the given record. */

unsigned int HighInterestCount(const LoanApp *ptr, int length)
{
	int count = 0;
	for(int i=0; i<length; i++)
    {
        if(LD1[i].LoanInterestRate>=7.0)
            {count++;}
    }
    return count;
}