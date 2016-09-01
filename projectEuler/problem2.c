#include <stdio.h>

int fibonacci (int n) {
		if (n==0) {
			return 0;
		}	
		if (n==1) {
			return 1;
		}
		return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

	int count=0;
	int i=0,sum=0;

	while (count<=4000000) {
		count = fibonacci(i);
		if (count%2==0) {
			sum += count;
		}
		i+=1;
	}
	printf("%d\n",sum);
	return 0;
}

