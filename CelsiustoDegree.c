#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter celsius-\n");
    scanf("%f", &celsius);
    fahrenheit = ((celsius * 9) / 5) + 32;
    printf("\n\n Temperature in fahrenheit is:  %f", fahrenheit);
    return (0);
}