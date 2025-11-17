//Harshit patil 25070521104


#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
	int i;
	for(i = 2;i < (n);i++)
		{
			if(n % i == 0)
			return 0;
		}
	return 1;
}

// Function to check if a number is an Armstrong number
int is_armstrong( n) {
	int digits = (int)log10(n) + 1;
	int j = n;
	int sum = 0;
	while(j!=0){
		sum = sum + pow(j % 10,digits);
		j /= 10;
	}
	return sum == n ? 1:0;
}

int main() {
	int n;
	
	// Input from the user
	scanf("%d", &n);
	
	// Check if the number is prime
	if (is_prime(n))
		printf("%d is prime\n", n);
	else
		printf("%d is not prime\n", n);
	
		if (is_armstrong(n))
		printf("%d is Armstrong\n", n);
	else
		printf("%d is not Armstrong\n", n);
	
	return 0;
}
