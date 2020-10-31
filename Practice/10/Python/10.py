s, l1, r1, l2, r2 = map(int,input().split())
if (s >= (l1 + l2) and s <= (r1 + r2)):
	print(l1, s - l1)
else:
	print(-1)