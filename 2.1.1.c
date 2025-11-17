//Harshit patil 25070521104



#include <stdio.h>
#include <math.h>
int main() {
	
	int n,i;
	float a[10],sum = 0,mean,var = 0;
	printf("Enter the number of values: ");
	scanf("%d", &n);
	
	printf("Enter values : ");
	for(int i = 0;i < n;i++) {
		scanf("%f\n", &a[i]);
		sum = sum + a[i];
	}
	mean = sum / n;
	printf("Mean = %.2lf\n",mean);
	
	for( i = 0;i < n;i++) {
		var = var + pow(a[i] - mean,2);
	}
	var = var / n;
	printf("Variance = %.2lf\n",var);
	var = sqrt(var);
	printf("Deviation = %.2lf\n",var);
	return 0;
	
}