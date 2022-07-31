#include "bitmap.h"
/*  In this case The function has to remove all character in string except
    alphabets.Input consist of string assume that the character in the
    string can contain both uppercase, lowercase &symbols.
    Ex: 
    Input: 1@3joy
    Expected output: joy */

    char* rmvExpAlpha(char *str)
    {
        int j;
		for(int i=0; str[i]!='\0'; i++)
		{
			while(!(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z') && !(str[i]=='\0'))
			{
				for (j = i; str[j] != '\0'; ++j) 
				{
            		str[j] = str[j+1];
				}
				str[j] = '\0';
			}
            return str;
        }
	}

/* In this case, Input is string of lowercase character from ‘a – z’,
   the function will return the character of this string in sorted 
   alphabetical order as per below example. 
   Ex: 
   Input: “kpit”
   Expected output: ikpt..*/

    const char* sortStr(char *lowerCase)
	{
		char temp;
		int n=strlen(lowerCase);
        for(int i=0; i<n-1; i++)
        {
        	for(int j=i+1; j<n; j++)
        	{
        		if(lowerCase[i]>lowerCase[j])
        		{
        			temp = lowerCase[i];
        			lowerCase[i] = lowerCase[j];
        			lowerCase[j] = temp;
				}
			}
		}
        return lowerCase;
    }

/* In this case the function will return reverse digit of the unsigned number. 
   Ex: 
   Input: 103 
   Expected output:301. */


	unsigned int revDigit (unsigned int num)
        {
        	int rev_num =0;
        	while(num>0)
        	{
        		rev_num = rev_num*10 + num%10;
        		num = num/10;
			}
			return rev_num;
        }

/* In this case, the function will return equivalent binary value of unsigned number.
   Ex: 
   Input: 5
   Expected output:101*/


	unsigned int biValue(unsigned int num)
    {
        int binaryNum = 0;
    	int rem,temp = 1;
        while(num != 0)
        {
        	rem = num%2;
        	num = num/2;
    		binaryNum = binaryNum+rem*temp;
        	temp = temp*10;
		}
        return binaryNum;
	}

