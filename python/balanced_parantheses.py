from stack import Stack

def is_balanced(a):

	s = Stack()

	for i in range(len(a)):
		if a[i] in '([{' :
			s.push(a[i])
		else:
			if s.peek() == "(":
				tmp = ")" 
			elif s.peek() == "[":
				tmp = "]" 
			elif s.peek() == "{":
				tmp = "}"

			if tmp == a[i]:
				s.pop()
			else:
				return False

	return s.isEmpty()


if __name__ == "__main__":
	string1 = '([{}])'
	string2 = '{{[)}]('

	print(is_balanced(string1)) 
	print(is_balanced(string2)) 