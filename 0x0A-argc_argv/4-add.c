#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * check_num - string there are digit
 * @str: array str
 * Return: 0 (success)
 */
int check_num(char *str)
{
	/*Declare variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print the name of the program
 * @argc: count argumets
 * @argv: arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]) /*ATOI- convert string to int*/
				sum += str_to_int;
		}
		/*if one of the number contains symbols that are not digits*/
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
