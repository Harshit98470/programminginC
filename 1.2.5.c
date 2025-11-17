//Harshit patil 25070521104




#include <stdio.h>
int main() {
	int n;
	if(scanf("%d",&n) != 1){
		
	}
	int x = n < 0 ? -n : n;
	if(x < 10000 || x > 99999){
		printf("Invalid input");
		return 0; }
		int sum = 0;
		for (int i = 0;i < 5; i++){
			sum += x % 10;
			x /= 10;
		
	}
printf("%d", sum);
return 0;
}