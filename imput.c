#include <stdio.h>
#include <math.h>


	double main()     /* program which introduces keyboard input */
	{
		float  a,b,c,s;

		printf("Enter imput a \n");
		scanf("%f", &a);
		printf("Enter imput b \n");
		scanf("%f", &b);
		printf("Enter imput c \n");
		scanf("%f", &c);
		s = sqrt(a);
		printf("The numbers you imput were %f %f %f \n", a,b,c);
		printf("The square root of %f is %f\n",a,s);
	}
