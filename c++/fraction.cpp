#include <iostream>
using namespace std;


class Fraction {
		int num, den;
	public:
		Fraction ();
		Fraction (int, int);
		void show (void) {
			cout << num << '/' << den << endl;
		}
		Fraction operator+ (const Fraction&);
};

int gcd (int m, int n) {
	int oldm, oldn;
	while (m%n != 0) {
		oldm = m;
		oldn = n;
		m = oldn;
		n = oldm%oldn;
	}
	return n;
}

Fraction Fraction::operator+ (const Fraction& f) {
	int x,y,common;
	x = num*f.den + den*f.num;
	y = den * f.den;

	common = gcd(x,y);
	return Fraction(x/common,y/common);
}



Fraction::Fraction () {
	num = 1;
	den = 1;
}

Fraction::Fraction (int n, int d) : num(n), den(d) {}

int main () {

	Fraction a (1,4);
	Fraction b (1,2);

	Fraction c = a+b;
	c.show();
	return 0;
}