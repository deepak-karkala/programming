def gcd(m,n):
	while m%n != 0:
		oldm = m
		oldn = n
		m = oldn
		n = oldm%oldn
	return n

class Fraction:

	def __init__(self,num,den):
		self.num = num
		self.den = den

	def show(self):
		print(self.num,"/",self.den)

	def __str__(self):
		return str(self.num)+"/"+str(self.den)	

	def __add__(self,other):
		num = self.num*other.den + other.num*self.den
		den = self.den*other.den
		common = gcd(num,den)
		return Fraction(num//common,den//common)


a = Fraction(1,4)
b = Fraction(1,2)
print(a.num)
print(a+b)
