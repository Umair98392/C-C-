// C program to show input and output

#include <stdio.h>

int main()
{

	// Declare the variables
	int num;
	char ch;
	float f;

	// --- Character ---

	// Input the Character
	printf("Enter the Character: ");
	scanf("%c", &ch);
	// Output the Character
	printf("\nEntered character is: %c \n", ch);
	

	// --- Integer ---

	// Input the integer
	printf("\n\nEnter the integer: ");
	scanf("%d", &num);
	// Output the integer
	printf("\nEntered integer is: %d", num);

	// --- Float ---

	// Input the float
	printf("\n\nEnter the float: ");
	scanf("%f", &f);

	// Output the float
	printf("\nEntered float is: %f", f);

	

	return 0;
}
