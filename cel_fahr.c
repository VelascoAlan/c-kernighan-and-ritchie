#include<stdio.h>

main()
{

 float cel, fahr;
 int lower, upper, step;

	lower = 0;
	upper = 10;
	step = 1.8;

	cel = lower;

	while (cel <= upper){

	fahr = cel * 9 / 5 + 32;
	printf("%3.0f\t%4.1f\n",cel, fahr);
	cel = cel + step;
}

}