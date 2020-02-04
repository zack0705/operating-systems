seq = []
while(1):
	a = int(input("enter new"))
	if(int(a)==-1):
		break
	seq.append(a)
	
h = int(input("enter head"))
imax = int(input("enter max"))

a = len(seq)
total = 0
while(a>0):
	j = 999999
	for i in seq:
		if(abs(j-h)>abs(h-i) and (j==999999 or i>h)):
			j = i
		elif(abs(j-h)==abs(h-i)):
			if(j<h and i>h):
				j = i
		
	print(j, h)	
	seq.remove(j)
	total += abs(j-h)
	h = j
	maximum = 0
	for i in seq:
		if(i>maximum):
			maximum = i
	if(maximum<h and len(seq)!=0):
		print("yes")
		print(imax + imax-h)
		total = total + imax + imax-h 
		h = 0
	a -= 1
print(total)

