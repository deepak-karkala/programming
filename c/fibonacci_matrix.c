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

void power(int F[2][2],int n){
	int i=0;
	int M[2][2] = {{1,1},{1,0}};
	for (i=2;i<=n;i++){
		multiply(F,M);
	}
}


int fibonacci_matrix(int n){
	int F[2][2] = {{1,1},{1,0}};
	power(F,n-1);
	return F[0][0];
}

int main(){
	int n =20;
	int fn = 0;
	fn = fibonacci_matrix(n);
	printf("%d\n",fn);
	return 0;
}