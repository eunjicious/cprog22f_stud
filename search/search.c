#include<stdio.h>
#define SIZE 15 

int main(void)
{

	int key;
	int grade[SIZE] = { 3,  4,  9, 13, 21, 
					   24, 31, 39, 40, 41, 
					   46, 51, 55, 67, 82};

	printf("Key: ");
	scanf("%d", &key);

	// Implement binary_search function. 
	// Function arguments should be properly defined. 
	printf("key index = %d\n", binary_search());

	return 0;

}
