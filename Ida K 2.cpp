#include <stdio.h>

int main()  
{
    int start, end, increment;
    
    
    printf("Enter the starting temperature in Fahrenheit: ");
    scanf("%d", &start);
    
    printf("Enter the ending temperature in Fahrenheit: ");
    scanf("%d", &end);
    
    printf("Enter the increment value: ");
    scanf("%d", &increment);
    
    
    printf("\nFahrenheit to Celsius Conversion Table:\n");
    printf("__________________________________________\n");
    printf("| %4s | %6s |\n", "Fahrenheit", "Celsius");
    printf("___________________________________________\n");
    
    
    for (int a = start; a <= end; a += increment) 
	{
        printf("| %4d | %6.2f |\n", a, (a - 32) * 5.0 / 9.0);
    }
    printf("_____________________________________________\n");
    
    return 0;
}

