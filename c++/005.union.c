#include <stdio.h>

union Number
{
	int i;
	struct 
	{
		/* data */
		char first;
		char second;
	}half;
};


int main()
{
	union Number number;

	number.i = 0x4241;
	printf("%c%c\n", number.half.first, number.half.second);

	number.half.first = 'a';
	number.half.second = 'b';

	printf("%x\n", number.i);
}

/*
union Number
{
	int i;
	struct 
	{
		char first;
		char second;
	}half;
}a, b;

union 
{
	int i;
	struct 
	{
		char first;
		char second;
	}half;
}a, b;
*/