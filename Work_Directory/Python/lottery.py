import numpy as np 

def luck_game():
	print("Hello, let's check if you're lucky!'")
	print("You are asked to guess a number between 0 and 10'")
	luck_number = int(np.random.uniform(0,11))
	user_input = input("Enter your guess: ")
	if int(user_input) <= 10:
		if int(user_input) == luck_number:
			print("Wow! You're one of the luckiest people on the planet")
		else:
			print("Try again my friend the corret number is", luck_number,".")
	else:
		print("Invalid input")

luck_game()
		
