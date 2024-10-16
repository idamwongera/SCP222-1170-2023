#include <stdio.h>

int main() 
{
	int start, end, increment;
	
	
	printf("Initial value in pounds: ");
	scanf("%d", &start);
	
	printf("Final value in pounds: ");
	scanf("%d", &end);
	
	printf("Interval: ");
	scanf("%d", &increment);
	
	
	printf("\nPounds to Kilograms Conversion Table\n");
	printf("_______________________________________\n");
	printf("| %6s | %10s |\n", "POUNDS", "KILOGRAMS");
	printf("_______________________________________\n");
	
	
	for (int a = start; a <= end; a += increment)
	 {
	    printf("| %6d | %10.2f |\n", a, a * 0.453592);
	}
	
	printf("_______________________________________\n");
	
    return 0;	
}
