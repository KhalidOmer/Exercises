"Format and input output"

print(5 + 5)

age = 24

i = "I am {} years old!".format(age)
print(i)
u = "I am {age} years old, are you {age1} years old?".format(age = 24, age1 = 25)
print(u)

user_age = input("Enter your age: ")

print("You have lived for {} seconds.".format(user_age * 365 * 24 * 60 * 60))

def age_in_seconds ():
	user_age  = input("Enter your age: ")
	age_seconds = int(user_age) * 365 * 24 * 60 * 60
	print ("You have lived for {} seconds.".format(age_seconds))
age_in_seconds()


