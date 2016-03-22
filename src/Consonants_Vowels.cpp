/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
#include<stdio.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	//check for null string
	if (str == NULL||str=="")
	{
		*consonants = 0;
		*vowels = 0;
		return;
	}
	int length = 0, i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	//check for empty string
	if (length == 0)
	{
		*consonants = 0;
		*vowels = 0;
		return;
	}
	i = 0;
	int vow = 0;
	int con = 0;
	//counting number of vowels and consonants
	while (str[i] != '\0')
	{ 
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			vow += 1;
		}
		else if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A'&&str[i] <= 'Z'))
		{
			con += 1;
		}
		i++;
	}
	*vowels = vow;
	*consonants = con;
	return;

}
