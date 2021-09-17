#include <stdio.h>

main()
{
	float fahr, celcius;
	int lower, upper, step;

	 lower = 0;
	 upper = 300;
	 step = 20;

	 fahr = lower;

	 printf("fahr\t cel\n");
	 

	 while (fahr <= upper){

	 	celcius = 5 *(fahr-32) / 9;
	 	printf("%3.0f\t%6.1f\n", fahr, celcius);
	 	fahr = fahr + step;
	 }

}