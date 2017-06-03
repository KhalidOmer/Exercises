# for ordering a dictionary 
# we use the keys: first grab the keys out order them 
# f we use a for loop to order the values

D = {'a':1, 'b' :2, 'c':3}
ks = list(D.keys())
keys.sort()

for key in ks:
	print(key, '=>', D[key])
# another way is to use the in-built function sorted 

for key in sorted(D):
	print(key, '=>', D[key])

# the method update merges two dictionaries together 

D = {'egg':3, 'spam': 2, 'ham':1}
D2 = {'toast':4, 'muffin':5}
D.update(D2)
#notice it overwrites the values if there are to similar keys it takes the values from the dictionary in between parenthesis 

#creation of dictionaries
dict.fromkeys(['a', 'b'], 0)
#we created dictionary by initializing the values to zero we can put default there 




