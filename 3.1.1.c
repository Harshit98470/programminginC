//Harshit patil 25070521104


#include <stdio.h>

calculateSimpleInterest(int principal,int time,int rate) {
	
	int SimpleInterest;
	SimpleInterest = (principal * time * rate) / 100;
	return SimpleInterest;
}

int main() {
	int principal, time, rate, simpleInterest;
	scanf("%d\n", &principal);
	scanf("%d\n", &time);
	scanf("%d",&rate);
    
   	simpleInterest = calculateSimpleInterest(principal, time, rate);
	
		printf("%d\n", simpleInterest);
	
	return 0;
}