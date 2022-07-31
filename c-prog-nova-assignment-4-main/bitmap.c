#include"bitmap.h"


/*The function returns unsigned integer.

In this case the function accept unsigned integer as input (valid inputs from 1 to 9)
and the output should be in below pattern.
If the input value of Num =3, then output will be 333, 
if the value of Num =9, then output will be 999999999 can be 
achieved without using control statement like switch, if, if-else and loop statement.*/


int Sequence(unsigned int Num)
{
    unsigned int seq=0;
    seq += (Num==1) ? 1:0;
    seq += (Num==2) ? 22:0;
    seq += (Num==3) ? 333:0;
    seq += (Num==4) ? 4444:0;
    seq += (Num==5) ? 55555:0;
    seq += (Num==6) ? 666666:0;
    seq += (Num==7) ? 7777777:0;
    seq += (Num==8) ? 88888888:0;
    seq += (Num==9) ? 999999999:0;
    return seq;
}


/* 
The function returns unsigned integer either ‘1’ or ‘0’.
Input consists of one unsigned integer. In this case the function checks
the given number is Niven Number or Not. Niven Number is an integer that is
divisible by the sum of its digits. If its Niven Number then it returns 0, if not it returns 1.
Ex:   156 
It is Niven Number. The above Number (156) is divisible by sum of its digits. 
156  1+5+6 =12. Hence 156 can be divisible by 12. */

int NivenNumber(unsigned int Num)
{
    int sum=0;
    while(Num!=0)
    {
        sum += Num%10;
        Num = Num/10;
    }
    if(Num%sum==0)
        {return 0;}
    else
        {return 1;}
}


/* The function returns integer value. It has two arguments one is 
integer array and other is arraysize (length of an array). 
In this case, the function will return the 3rd smallest number in given array.
Ex.

{98,4,33,54,6}, In this integer array 33 is the 3 rd smallest number. Hence function will return 33.*/


int Find3rdSmallestNumber(unsigned int arrVal[], unsigned int arrSize)
{
    int temp=0;
    for(int i=0; i<arrSize; ++i)
    {
        for(int j=i+1; j<arrSize; ++j)
        {
            if(arrVal[i]>arrVal[j])
            {
                temp = arrVal[i];
                arrVal[i] = arrVal[j];
                arrVal[j] = temp;
            }
        }
    }
    return arrVal[2];
}


/* 

The function returns integer value. It has two arguments, the start number and
the end number of a region and should calculate the count of all numbers except number
with a 5 in it. The start number will always be smaller than the end number. 

Ex.
input :(1,10)
output: 9 -> (1,2,3,4,6,7,8,9,10) it count of all numbers except number
with a 5.


*/

int countNumbersExceptFive(int start, int end)
{
    int count = 0;
    for(int i=start; i<=end; i++)
    {
        if(i%5 == 0 && i%10 != 0 || i/10 == 5)
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    return count;
}

/* 

The function returns integer value. It has two arguments one is 
integer array and other is length(length of an array or Size of array). 
In this case, the function will return the sum of two highest positive numbers 
in given array. No floats or non- positive numbers will be passed

Ex.
When array is passed like 
{8,4,3,5,6},  the output should be 14 
(the sum of two highest positive numbers in given arrays are 6 and 8 hence 6+8 =14).

*/


long sumOfTwoLargestNumbers(int length , const int numbers[])
{
    int highest1 = numbers[0];
    int highest2 = numbers[1];
    int temp = 0;

    if(highest1 < highest2)
    {
        temp = highest1;
        highest1 = highest2;
        highest2 = temp;
    }

    for(int i=2; i<length; i++)
    {
        if(numbers[i] > highest1)
        {
            highest2 = highest1;
            highest1 = numbers[i];
        }
        else if(numbers[i] > highest2 && numbers[i] != highest1)
        {
            highest2 = numbers[i];
        }
    }
    return highest1+highest2;
}

