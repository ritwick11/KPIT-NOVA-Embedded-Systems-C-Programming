#include<stdio.h>
#include<math.h>
#include "bitmap.h"


/*

This function returns the approximated value for angle passed in struct Data variable till the limit 
specified by the degree field in the struct.

The function must implement the formula required for the approximation as given in
the document and return the answer with upto 6 places of decimal precision.

Notes:
●	All angles stored in the struct member will be in degrees and must be converted 
    to radian before calculation of final answer.
●	The limit given by the system's hidden test cases will not exceed 10 
    to avoid integer overflow during factorial calculation.

*/


float approximateTaylorSeries(struct Data d1)
{
    // int i,j;
    float sum = 0.0f;
    float x = d1.angle*(3.1415/180);
    int q = x;
    for(int i=1, j=1; i<=d1.degree; i++, j=j+2)
    {
        if(i%2==0)
            sum = sum + pow(x,j)/factorial(j);
        else
            sum = sum - pow(x,j)/factorial(j);
    }
    return fabs(sum);   
}   
/* 

This function returns the factorial of integer passed if it is greater than or equal to 0.

For negative numbers, the function must return -1 as an answer to indicate invalid values.

*/

int factorial(int x)
{
    int fact = 1;

    if(x==0)
        {fact = 1;}
    else if(x>=1)
        {fact = x*factorial(x-1);}
    else
        {fact=-1;}

    return fact;
}