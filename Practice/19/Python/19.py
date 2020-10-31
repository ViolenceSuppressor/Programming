def combine(letters, left, repeats):
	if (len(letters) != length):
		if repeats > 0:
			left = userinput
		for word in left:
		    if letters.find(word)!=-1:
		        combine(letters + word, left.replace(word,"",1),repeats - 1)
		    else:
		        combine(letters + word, left.replace(word,"",1),repeats)
	else:
		print(letters,end = " ")

length = int(input())
userinput = input()
combine("",userinput,length - len(userinput))
