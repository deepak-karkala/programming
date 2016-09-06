#include <stdio.h>

void func2(int o[2]){
	o[0] = 10;
}

int func() {
	int out[2];
	out[0]=1;
	func2(out);
	return out[0];
}

int main(){
	printf("%d\n",func());
}