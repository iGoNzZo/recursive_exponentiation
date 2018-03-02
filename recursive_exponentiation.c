#include <stdio.h>
#include <math.h>

//function declation
int power(int base, int exponent);

int b;
int e;

//main to take ina value
void main(void)	{
	printf("Enter a value for the base: ");
	scanf("%d", &b);
	
	printf("Enter a value for the exponent: ");
	scanf("%d", &e);
	
	printf("%d\n\n", power(b, e));
}// end main 

//recursive exponent function 
int power(int base, int exponent)	{
	if(exponent == 0)	{
		return 1;
	}
	else if(base == 1)	{
		return 1;
	}
	else	{
		
		return base * power(base, exponent - 1);
	}
}// end power function
