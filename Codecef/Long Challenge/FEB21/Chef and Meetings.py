n= int(input())
while n>=1:
	
	date=input()
	h=int(date[0:2])
	m=int(date[3:5])
	if date[6:8]=="AM" and h==12:
		h=0;
	if date[6:8]=="PM" and h!=12:
		h=h+12;
	nn=int(input())
	ans=""
	while nn>=1:
		
		x= input()
		fx=""
		fs=""
		if x[6:8]=="AM":
			if int(x[0:2])==12:
				fx=0
			else :
				fx=int(x[0:2])
		if x[6:8]=="PM":
			if int(x[0:2])==12:
				fx=int(x[0:2])
			else :
				fx=int(x[0:2])+12
		# second.....
		if x[15:17]=="AM":
			if int(x[9:11])==12:
				fs=0
			else :
				fs=int(x[9:11])
		if x[15:17]=="PM":
			if int(x[9:11])==12:
				fs=int(x[9:11])
			else :
				fs=int(x[9:11])+12
		#check
		#print(h, m,fx,fs)
		
		
		if h>=fx and h<=fs  and fx<=fs:
			if h==fx and m<int(x[3:5]):
			
				ans=ans+'0'
			elif h==fs and m> int(x[12:14]):
			
				ans=ans+'0'
			else:
			
				ans=ans+'1'
			
		elif (h>=fx or h<=fs)  and fx>fs:
			
			if h==fx and m < int(x[3:5]):
			
				ans=ans+'0'
			elif h==fs and m > int(x[12:14]):
			
				ans=ans+'0'
			
			else:
			
				ans=ans+'1'
			
		
		else :
		
			ans=ans+'0'
		
		nn=nn-1
	print(ans)

	n=n-1
