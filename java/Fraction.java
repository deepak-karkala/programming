class Fraction {

	public int num,den;

	public Fraction(int n, int d) {
		num = n;
		den = d;
	}

	public void show(){
		System.out.println(num + "/" + den);
	}

	public int gcd(int m, int n) {
		int oldm, oldn;
		while (m%n != 0) {
			oldm = m;
			oldn = n;
			m = oldn;
			n = oldm%oldn;
		}
		return n;
	}

	public Fraction add(Fraction f){
		int x,y;
		x = num*f.den + den*f.num;
		y = den*f.den;
		int common = gcd(x,y);
		return new Fraction(x/common,y/common);
	}

	public static void main(String[] args) {
		Fraction a = new Fraction(1,4);
		Fraction b = new Fraction(1,2);
		Fraction c = a.add(b);
		c.show();
	}

}