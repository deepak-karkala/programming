object rationals {

	class Rational(x: Int, y: Int) {
		private def gcd(a: Int, b: Int): Int = if(b==0) a else gcd(b, a%b)
		private val g = gcd(x,y)
		def numer = x/g
		def denom = y/g

		require(y>0, "denominator should be positive")

		def this(x: Int) = this(x, 1)

		override def toString = numer + "/" + denom

		def add(that: Rational): Rational = 
		  new Rational(numer*that.denom + denom*that.numer, denom*that.denom)

		def neg = new Rational(-numer, denom)

		def sub(that: Rational) = add(that.neg)

		def less(that: Rational) = this.numer*that.denom < this.denom*that.numer

		def max(that: Rational) = if (this.less(that)) that else this
	}



	def main(args: Array[String]): Unit = {

		val x = new Rational(1,2)
		val y = new Rational(5,7)

		println(x.max(y))
	}
}