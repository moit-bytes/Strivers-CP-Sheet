n = int(input())

for i in range(1, n+2):
	print("  "*(n+1-i), end = "")
	k = -1
	res = ""
	for j in range(2*i - 1):
		if(j>=i):
			k = k - 1
			res = res + str(k) + " ";
		else:
			k = k + 1
			res = res + str(k) + " ";
	res = res.strip();
	print(res)

for i in range(1, n+1):
	print("  "*i, end = "")
	k = -1
	res = ""
	for j in range(2*(n+1-i) - 1):
		if(j>=n+1-i):
			k = k - 1
			res = res + str(k) + " ";
		else:
			k = k+1
			res = res + str(k) + " ";
	res = res.strip();
	print(res)


