#include <string.h>
#include <stdbool.h>
#include<stdio.h>
#include "theMethods.h"
#include <ctype.h>
/*
 * Main.c
 *
 *  Created on: Feb 15, 2018
 *      Author: Kevin Williams
 *      N00854140
 *      Windows
 */


int main()
{

	char firstI= 'K';
	char lastI= 'W';

	printf("My first name initial is %c\n",firstI);
	fflush(stdout);

	printf("My last name initial is %c\n",lastI);
	fflush(stdout);

	int binaryFirst[8];
	int binaryLast[8];


	convertCharToBinary(firstI,binaryFirst);
	int onesFirst=countOnes(binaryFirst);


	convertCharToBinary(lastI,binaryLast);
	int onesLast=countOnes(binaryLast);
	//first intial in binary numbers
	printf("My First initial in binary numbers: ");
	fflush(stdout);
	for(int i = 0; i<8;i++)
	{
		printf("%i",binaryFirst[i]);
		fflush(stdout);
	}
	printf("\nThe number of ones in the binary number of my first initial is %i",onesFirst);

	//last initial in binary numbers
	printf("\nMy Last initial in binary numbers: ");
	for(int i = 0; i<8;i++)
	{
		printf("%i",binaryLast[i]);
		fflush(stdout);
	}

	printf("\nThe number of ones in the binary number of my last initial is %i",onesLast);
	fflush(stdout);

	puts("");
	bool promptThem1 = true;

	char input1[10];
	int binary1 [8];
	int binary2 [8];
	int binary3 [8];

	bool gameOn= true;

	int line;
	while(gameOn)
	{
		if(gameOn==true)
		{
			puts("Please enter three letters: ");
			fflush(stdout);
		}
		//printf("This is the prompt Them \n %i",promptThem1);
		promptThem1 = true;
		while(promptThem1)
		{
			line = krgetline(input1,10);
			//puts("The user input was : ");
			//puts(input1);
			printf("\nThe user input was: ");
				for(int i = 0;i< mystrlen(input1);i++)
				{
					printf("%c",input1[i]);
					fflush(stdout);
				}

			//printf("The length is %i\n",mystrlen(input1));
			//fflush(stdout);
			if(mystrlen(input1)==4)
			{

				if(isItAlpha(input1)==1)
				{
					promptThem1 = false;
				}

			}
			else
			{
				puts("Invalid input, please enter 3 letters :");
				fflush(stdout);
			}
		}


		//for (int i = 1; i<4; i++)
		if(promptThem1==false)
		{
			char toPass = input1[0];
			printf("\nThe first input was: %c\n",toPass);
			fflush(stdout);
			convertCharToBinary(toPass,binary1);
			printf("The binary number of the first input is : ");
			for(int i = 0; i<8;i++)
				printf("%i",binary1[i]);
			fflush(stdout);

			int numOnes1=countOnes(binary1);
			printf("\nThe number of ones in the first binary number is %i",countOnes(binary1));
			fflush(stdout);





			char toPass2 = input1[1];
			printf("\n\nThe second input was: %c\n",toPass2);
			fflush(stdout);
			convertCharToBinary(toPass2,binary2);
			printf("The binary number of the second input is : ");
			for(int i = 0; i<8;i++)
				printf("%i",binary2[i]);
			fflush(stdout);
			int numOnes2=countOnes(binary2);
			printf("\nThe number of ones in the second binary number is %i",countOnes(binary2));
			fflush(stdout);
			puts("\n ");

			char toPass3 = input1[2];
			printf("The third input was: %c\n",toPass3);
			fflush(stdout);
			convertCharToBinary(toPass3,binary3);
			printf("The binary number of the third input is : ");
			for(int i = 0; i<8;i++)
				printf("%i",binary3[i]);
			fflush(stdout);

			int numOnes3=countOnes(binary3);
			printf("\nThe number of ones in the third binary number is %i",numOnes3);
			fflush(stdout);
			puts("\n ");


			if(numOnes1==onesFirst)
			{
				gameOn=false;
				printf("My first initial K matched with input %c \n",input1[0] );
			}
			else
				if(numOnes2==onesFirst)
				{
					gameOn=false;
					printf("My first initial K matched with input %c \n",input1[1] );
				}
				else
					if(numOnes3==onesFirst)
					{
						gameOn=false;
						printf("My first initial K matched with input %c \n",input1[2] );
					}
					else
						if(numOnes1==onesLast)
						{
							gameOn=false;
							printf("My last initial W matched with input %c \n",input1[0] );
						}
						else
							if(numOnes2==onesLast)
							{
								gameOn=false;
								printf("My last initial W matched with input %c \n",input1[1] );
							}
							else
								if(numOnes3==onesLast)
								{
									gameOn=false;
									printf("My last initial W matched with input %c \n",input1[2] );
								}
		}
		if(gameOn==true)
		{
			puts("Input did not match ");
			fflush(stdout);
		}

	}
	return 0;

}
