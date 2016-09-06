#include <stdio.h>

int fibonacci_dynamic(int n) {
	int a,b,c;
	int i=0;
	a=0; b=1;

	for (i=2; i<=n; i++) {
		c = a+b;
		a = b;
		b = c;
	}

	return c;
}


int main(){
	int n=40;
	printf("%d\n",fibonacci_dynamic(n));
	return 0;
}