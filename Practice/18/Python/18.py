words = ("hallo", "klempner", "das", "ist", "fantastisch", "fluggegecheimen")
length = 0
probability = 1
for word in words:
	length += len(word)
userinput = input()
for userletter in userinput:
	variants = 0
	for word in words:
		for letter in word:
			if userletter == letter:
				variants+=1
	probability *= variants / length
print(probability)
