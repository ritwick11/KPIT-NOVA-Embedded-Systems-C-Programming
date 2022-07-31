#include"bitmap.h"

/*        The function returns length of given string.
 Student is expected to design without using string length function strlen(). */

                int arrLength(const char* str)
                {
                    int length=0;
                    for(int i=0; str[i]!='\0'; i++)
                    {
                        length++;
                    }
                    return length;
                }

/*The function returns 1 or 0.  
Input is string of lowercase character from ‘a – z’ 
the function will check repeated character in a given string, 
if it’s found, then return 1 or else 0.*/


                int repCharaCheck(const char* str1)
                {
                    int length = arrLength(str1);
                    for(int i=0; i<=length; i++)
                    {
                        for(int j=i+1; j<=length; j++)
                        {
                            if(str1[i] == str1[j])
                            {
                                return 1;
                            }
                        }
                    }
                return 0; 
                }


/*The function returns 1 or 0. It has two arguments one is string 
and other one is an index position. In this case, the function will 
identify whether value at index position is a character or a Number.
If the value at index position is numbered it returns 1 else it return 0
*/

                int checkAnyIndex(const char* str, int indexPosition)
                {
                    if(str[indexPosition] >= 48 && str[indexPosition] <= 57)
                    {
                        return 1;
                    }
                    else
                    { 
                        return 0;
                    }
                }
/*The function returns middle character in given string.
Case 1: odd
If the length of the string is odd, it’s easy to identify the middle character in given string.

Case2: Even.
If the length of the string is even, then there would be two middle character we need compare 
those two middle character and the greater one has to print.
Ex: Input string is “abcd” here ‘b’ and ‘ c’are the middle character so we need compare 
‘b’ element and ‘c’ which is greater that has to print. In above example c is greater, then output will be ‘c’
*/

                char checkMidChara(const char* str)
                {
                    int length = arrLength(str);
                    if (length%2==0)
                    {
                        if(str[length/2] > str[(length/2)-1])
                        {
                            return str[length/2];
                        }
                        else
                        {
                            return str[(length/2)-1];
                        }
                    }
                    else
                    {
                        return str[(length/2)];
                    }
                    return 0;
                }