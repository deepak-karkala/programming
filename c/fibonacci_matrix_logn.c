#include <stdio.h>

void multiply(int F[2][2], int M[2][2]){
	int x,y,z,w;
	x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
	y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
	z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
	w = F[1][0] * M[0][1] + F[1][1] * M[1][1];
	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}

void power(int F[2][2], int n){
	int M[2][2] = {{1,1},{1,0}};

	if (n==0 || n==1)
		return;

	power(F,n/2);
	multiply(F,F);

	if(n%2 != 0)
		multiply(F,M);
}


int fibonacci_matrix(int n){
	int F[2][2] = {{1,1},{1,0}};
	if (n==0)
		return 0;
	power(F,n-1);
	return F[0][0];
}

int main(){
	int n = 20;
	printf("%d\n",fibonacci_matrix(n));
	return 0;
}