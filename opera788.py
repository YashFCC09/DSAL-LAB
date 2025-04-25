

def adding(n,set1):
	if n not in set1:
		set1.append(n)
		
		
def remove11(n,set1):
	if n in set1:
		set1.remove(n)
     
        	
        	
def display(set1):
	for i in set1:
		print(i,edu=" ")
		
		
def contains(n,set1):
	if n in set1:
		print("True")
	else:
	    print("False")
	    
	   
	   
def size1(set1):
	print(len(set1))
	
	
def size2(set1):
	count=0
	for i in range(len(set1)):
		count+=1
	return count
	
def intersection(set1,set2):
	seti=[]
	for i in set1:
		if i in set2:
			seti.append(i)
	print(seti)
	
	
def uninon(set1,set2):
	setk=[]
	for i in set1:
		if i not in setk:
			setk.append(i)
	for j in  set2:
		if j not in setk:
			setk.append(j)
			
			
	print(setk)
	
	
def defferance(set1,set2):
	seti=[]
	for i in set1:
		if i not in set2:
			seti.append(i)
	print(seti)


def subset(set1,set2):
      for i in set2:
           if i in set1:
           	continue
           	
           else:
               return False
      return True
      
      
           	
			
	
			
	
	
	
	   
	   
     
	
	
	
	
