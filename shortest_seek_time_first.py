seq = []
while(1):
	a = int(input("enter new"))
	if(int(a)==-1):
		break
	seq.append(a)
	
h = int(input("enter head"))

a = len(seq)
total = 0
while(a>0):
	j = 999999
	for i in seq:
		if(abs(j-h)>abs(h-i)):
			j = i
		elif(abs(j-h)==abs(h-i)):
			cl = 0
			cr = 0
			for k in seq:
				if(k>h):
					cr+=1
				elif(k<h):
					cl+=1
			if(cr>cl):
				if(j<h):
					j = i
	seq.remove(j)
	total += abs(j-h)
	h = j
	a -= 1
print(total)

