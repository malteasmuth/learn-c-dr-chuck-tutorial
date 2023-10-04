#include <stdio.h>

/*print Celsius-Fahrenheit table
 * for celsius  = 0, 20, ..., 300*/

int main(){

	int lower, upper, step;
	float fahr, celsius;
	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;

	printf("Celsius\t\tFahrenheit\n");

	while (celsius <= 300){
		fahr = ((9.0 / 5.0) * celsius) + 32.0;
		printf("%4.0f \t\t %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

}
