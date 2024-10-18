t = int(input())
for i in range(t):
	n, ll, rr = map(int, input().split())
	array = list(map(int, input().split()))
	count = 0
	total = 0
	l = 0

	for r in range(n):
	    if total >= ll and total <= rr:
	    	count += 1
	    	total = 0
	    	l = r + 1
	    elif (total > rr):
	    	total -= array[l]
	    	l = l + 1
	    elif (total < ll):
	    	total += array[r]
	    
	print(count)