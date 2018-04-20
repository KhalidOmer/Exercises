"""This file has a various number of exerices and it could be a refresher for
Python concepts"""
"""Calculating the product of numbers in a list"""
def product(l):
    cnt = 1
    for i in l:
        cnt = cnt*i
    return cnt

"""Calculating the cubes of numbers"""
def cubes(n):
	cubes = [x**3 for x in range(n)]
	return cubes

"""Find the even numbers in list"""
def even_to_n(n):
	evens_to_n = [i for i in range(n) if i % 2 == 0]
	return (evens_to_n)

"""Find the median of a list"""
def median(l):
	# first sort the list 
    L = sorted(l)
    # if the number of items in the list is even 
    if len(L)%2==0:
        med = (L[int((len(L))/2) - 1] + L[int((len(L))/2)])/2.0
    # if the number of items is odd 
    else:
        med = L[int((len(L)+1)/2) -1]
    return med

"""This function chechs whether the integer is prime or not;""" 
def is_prime(n):
	# n is a postive number
    if n>=0:
    # 0 , 1 are not prime numbers
        if n<2:
            return False 
    # 2 is a prime number
        if n == 2:
            return True
    # any even number is not a prime number
        if n % 2 == 0:
            return False
	"""check the odd numbers and the number is divisable 
    by any number rather than itself discard it""" 
        for x in range(3, n+1,2):
            if n % x == 0:
                return False
            else:
                return True
"""Dictionaries"""

""" a dictionary is represented by two values the key and the value
in between culry brackets in the form; dic = {key:value}"""

my_dict = {
    "Name": "Khalid",
    "age" : "25",
    "Job" : "Jobless"}
#Printing the items of a dictionary
print(my_dict.items())
#OR 
for i in my_dict:
    print(my_dict[i])
"""Lambda and the filter functions"""


"""the filter takes two arguments, 
the filtering function and the list that need to be filtered"""
my_list = range(n)#pick any n to test the function
filter(lambda x: x % 3 == 0, my_list)

"""Classes"""
"""This part I took some of the material from codecademy"""

class Fruit(object):
  """A class that makes various tasty fruits."""
  def __init__(self, name, color, flavor, poisonous):
    self.name = name
    self.color = color
    self.flavor = flavor
    self.poisonous = poisonous

  def description(self):
    print ("I'm a %s %s and I taste %s." % (self.color, self.name, self.flavor))

  def is_edible(self):
    if not self.poisonous:
      print ("Yep! I'm edible.")
    else:
      print ("Don't eat me! I am super poisonous.")
#Adding an instance to the class
lemon = Fruit("lemon", "yellow", "sour", False)

"""Defining another class; this class has two methods,
adding items to the shopping cart and removing items from it"""
class ShoppingCart(object):
  """Creates shopping cart objects
  for users of our fine website."""
  items_in_cart = {}
  def __init__(self, customer_name):
    self.customer_name = customer_name

  def add_item(self, product, price):
    """Add product to the cart."""
    if not product in self.items_in_cart:
      self.items_in_cart[product] = price
      print (product + " added.")
    else:
      print (product + " is already in the cart.")

  def remove_item(self, product):
    """Remove product from the cart."""
    if product in self.items_in_cart:
      del self.items_in_cart[product]
      print (product + " removed.")
    else:
      print (product + " is not in the cart.")
