#include <string.h>
#include <stdbool.h>
#include<stdio.h>

/*
 * Implementation.c
 *
 *  Created on: Feb 15, 2018
 *      Author: Kevin Williams
 *      N00854140
 *      Windows
 */

int krgetline(char s [],int lim)
{
	char c;
	int i;

	for(i = 0; i<lim-1 &&(c=getchar())!= EOF && c!='\n'; i++)
	{
		s[i]=c;
		if(c=='\n')

		{
			s[i]=c;
			i++;
		}
	}
	s[i]='\0';
	return i;

}

bool mystrcmp(char s[],char t[])
{
	for(int i=0; s[i]==t[i];i++)
		if(!s[i])
			return true;
	return false;
}

int mystrlen(char s[])
{
	int count =0;
	while(s[count]!='\0')
	{
		count++;
	}
	return count;
}

int isItAlpha(char s[])
{
	int doesItCheckOut = 0;
	char c;
	for(int i=0; i< mystrlen(s)&&s[i]!='0';i++)
	{
		c=s[i];
		if((c>='A'&& c<'Z')||(c>='a'&& c<='z'))
			i++;
		else
			return doesItCheckOut;
	}
	doesItCheckOut= 1;
	return doesItCheckOut;
}

void convertCharToBinary(char c, int s[])
{
	int theNum=7;
	char thechar = c;
	//printf("This is the character in the convert method %c",c);
	fflush(stdout);
	for(int i = 0;i<8  ;i++)
	{
		//printf("This is the number %i \n ",thechar);
		int toPlace = thechar%2;
		s[theNum]= toPlace;
		theNum--;
		thechar = thechar/2;
	}

}


int countOnes(int binary[])
{
	int ones =0;

	for(int i =0; i<8;i++)
	{
		if(binary[i]==1)
               ones++;
	}

	return ones;
}




