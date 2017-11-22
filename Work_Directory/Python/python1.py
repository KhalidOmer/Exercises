class FirstClass:
	def setdata(self, value):
		self.data = value
	def display(self):
		print(self.data)

x = FirstClass()
y = FirstClass()

x.setdata("King Arthur")
y.setdata(3.14159)

class SecondClass(FirstClass):
	def display(self):
		print('current value = "%s" ' % self.data)

class ThirdClass(SecondClass):
	def __init__(self, value):
		self.data = value
	def __add__(self, other):
		return ThirdClass(self.data + other)
	def __str__(self):
		return "[ThirdClass: %s]" % self.data
	def mul(self, other):
		self.data *= other

class Person:
	def __init__ (self, name, jobs, age=None):
		self.name = name
		self.jobs = jobs
		self.age = age 
	def info(self):
		return (self.name, self.jobs)

rec1 = Person('Bob', ['dev', 'mgr'], 40.5)
rec2 = Person('Sue', ['dev', 'mgr'])



