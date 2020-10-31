import re
hasMatch = 0
pattern = "a...55661"
number = int(input())
for ticket in input().split():
	if re.match(pattern,ticket):
	    hasMatch = 1
	    print(ticket)
if hasMatch == 0:
    print(-1)