#include <stdio.h>

int calculate_greatest_common_divisor(int a, int b) {
	int r = 1, x1,x2; //initialize r with number >0
			 
	//case distinction for any sequence of numbers in the function call
	if (b>a) {
		x1 = b;
		x2 = a;
	}
	else {
		x1 = a;
		x2 = b;
	}

	//Euklids algorithm
	while (r>0) {
		r = x1 % x2; //modulo division
		x1 = x2;
		x2 = r;
	}
	return x1;
}

int main() {
	int input1, input2;

	printf("Enter first natural number: ");
	scanf("%i", &input1);	//read in first number
				
	printf("Enter second natural number: ");
	scanf("%i", &input2);	//read in second number

	//print result and prevent invalid inputs
	if ((input1 >  0) && (input2 > 0)) {
		printf("Greatest common divisor: %i\n", calculate_greatest_common_divisor(input1, input2));
	}
	else {
		printf("Numbers below 1 are not allowed!\n");
	}
	return 0;
}
