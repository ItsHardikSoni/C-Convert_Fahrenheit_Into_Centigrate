- Temperature of a city in Fahrenheit degrees is input through the keyboard. 
- Write a program to convert this temperature into Centigrade degrees.


#include <stdio.h>
#include <conio.h>
void main()
{
	float f, c;
	printf("\n Enter in fahrenheit: ");
	scanf("%f\n", &f);
	/* Formula of Centigrate*/
	c = ((f - 32) * 5) / 9;
	printf("\n\nTemprature in Centigrate = %f\n", c);
	getch();
}
