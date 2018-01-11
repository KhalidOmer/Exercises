

def age_converter():
	print("Hello I am an age converter, if you want to convert your age from years to seconds type in \"s\" if vice versa type in \"y\" .")
	options = input("Enter your option: ")
	if options == "s":
		user_age = input("Enter your age: ")
		age_in_sec = int(user_age) * 365 * 60 * 60 * 24 
		print("You have lived for {} seconds." .format(age_in_sec))
	else:
		user_age = input("Enter your age: ")
		age_in_years = int(user_age)/(365 * 24 * 60  * 60)
		print("You have lived for {} years!".format(age_in_years))

age_converter()
