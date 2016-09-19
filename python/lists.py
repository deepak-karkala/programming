import timeit

def test1():
	l = []
	for i in range(1000):
		l = l + [i]

def test2():
	l = []
	for i in range(1000):
		l.append(i)

def test3():
	l = [i for i in range(1000)]

def test4():
	l = list(range(1000))





#t1 = Timer("test1()", "from __main__ import test1")
#t2 = Timer("test1()", "from __main__ import test2")
#t3 = Timer("test1()", "from __main__ import test3")
#t4 = Timer("test1()", "from __main__ import test4")
print("Concat",timeit.Timer("test1()", "from __main__ import test1").timeit(number=1000))
print("Append",timeit.Timer("test2()", "from __main__ import test2").timeit(number=1000))
print("List Comp",timeit.Timer("test3()", "from __main__ import test3").timeit(number=1000))
print("Range",timeit.Timer("test4()", "from __main__ import test4").timeit(number=1000))
