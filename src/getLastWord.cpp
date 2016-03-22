/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>



char * get_last_word(char * str)
{
	int len = 0;
	int len1 = 0;
	char *ptr = NULL;
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len; str[i] != 32; i--)
	{
		len1++;
	}
	for (i = len1; i < len; i++)
	{
		ptr = (char *)malloc(sizeof(char));
		ptr = &str[i];
	}
	
	return ptr;
}
