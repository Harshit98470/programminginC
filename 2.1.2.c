//Harshit patil 25070521104



#include <stdio.h>

int main() {
	int a[10],n,i,pos=0,neg=0;
	scanf("%d", &n);
	for(i = 0;i < n;i++)
		scanf("%d", &a[i]);
	for(i = 0;i < n;i++)
		{
			if(a[i] < 0)
				neg = neg + a[i];
			else
				pos = pos + a[i];
			
		}
	printf("%d\n",pos);
	printf("%d\n",neg);
}