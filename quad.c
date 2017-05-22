#include <stdio.h>
#include <math.h>

float disc (float a, float b, float c);
float main(){
		float  a,b,c,d,x1,x2;

		printf("\n\t01010000 01110010 01100001 01101001 01110011 01100101 00100000 01110100 01101000 01100101 00100000 01001111 01101101 01101110 01101001 01110011 01110011 01101001 01100001 01101000\n");
		printf("\t Insert 3 numerical values for a,b, and c. Depress the Enter key following each input.\n");
		printf("\t The square root of a+b+c will be calculated and displayed.\n");
		printf("\t Enter value a:");
		scanf("%f", &a);
		printf("\t Enter value b:");
		scanf("%f", &b);
		printf("\t Enter value c:");
		scanf("%f", &c);
		d = disc(a,b,c);
		if (d <0){
			/* printf("\t Imaginary Roots\n");
			d =d * -1;
			a1 = (-1 * b)/ (2 */
		}else{
			x1 = ((-1 * b) + sqrt(d)) / (2*a);
			x2 = ((-1 * b) - sqrt(d)) / (2*a);
		}
		
		printf("\n\t The values you input were %f %f %f \n", a,b,c);
		printf("\n\t The discriminant of values a,b, and c is %f",d);
		printf("\n\t The roots are %f and %f .",x1,x2);
			printf("\n\t01010000 01110010 01100001 01101001 01110011 01100101 00100000 01110100 01101000 01100101 00100000 01001111 01101101 01101110 01101001 01110011 01110011 01101001 01100001 01101000\n");
		return 0;
	}

float disc (float a, float b, float c){
	float d = (b*b)-(4*a*c);
	return d;
}
