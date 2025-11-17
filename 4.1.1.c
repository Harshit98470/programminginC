//Harshit patil 25070521104


#include <stdio.h>

struct Distance {
 int feet;
float inch;
} d1,d2,sum    ;

int main() {
	// take first distance input
	printf("Enter 1st distance \n");
	printf("feet: ");
	scanf("%d", &d1.feet);
	printf("inch: ");
	scanf("%f", &d1.inch);
	// take second distance input
	printf("Enter 2nd distance \n");
	printf("feet: ");
	scanf("%d", &d2.feet);
	printf("inch: ");
	scanf("%f", &d2.inch);
	 sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // convert inches to feet if greater than or equal to 12
    if (sum.inch >= 12.0) {
        sum.feet += (int)(sum.inch / 12);
        sum.inch = sum.inch - ((int)(sum.inch / 12) * 12);
	}
	
	// convert inches to feet if greater than 12
	
	printf("Sum of distances = %d\'-%.1f\"",  sum.feet,sum.inch      );
	return 0;
}
