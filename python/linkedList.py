"""
linkedList.py
Implements singly linked list
"""

class Node:
	def __init__(self,initData):
		self.data = initData
		self.next = None

	def getData(self):
		return self.data

	def getNext(self):
		return self.next

	def setData(self,data):
		self.data = data

	def setNext(self,next):
		self.next = next


class LinkedList:
	def __init__(self):
		self.head = None

	def isEmpty(self):
		return self.head == None

	def add(self, item):
		temp = Node(item)
		temp.setNext(self.head)
		self.head = temp

	def size(self):
		count = 0
		current = self.head
		while current != None:
			current = current.getNext()
			count += 1
		return count

	def __str__(self):
		current = self.head
		tmp = ""
		while current!=None:
			tmp += "-->" + str(current.getData())
			current = current.getNext()
		return tmp

	def search(self, item):
		current = self.head
		count = 0
		while current != None:
			if current.getData() == item:
				return count+1
			current = current.getNext()
			count += 1
		return None

	def remove(self, item):
		current = previous = self.head
		while current!=None:
			if current.getData()==item:
				previous.setNext(current.getNext())
				if self.head==current:
					self.head = current.getNext()
			previous = current
			current = current.getNext()

if __name__ == "__main__":
	l = LinkedList()
	l.add(5)
	l.add(15)
	l.add(3)
	l.add(8)
	l.add(6)
	#print(l.search(15))
	print(l)
	l.remove(8)
	print(l)






