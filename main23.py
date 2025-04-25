import opera788 as os
set1=[]
set2=[]



n=0
while(n!=10):
	print("1.adding element:\n")
	print("12.adding element in anothe\n")
	print("2.remove element\n")
	print("3.display set\n")
	print("4.contains\n")
	print("5. size of the element\n")
	print("6.intersection \n")
	print("7.unino\n")
	print("8. differance\n")
	print("9. subset\n")
	print("10.Exit\n")
	
	n=int(input("Enter the choice above given:"))
	
	if(n==1):
	    k=int(input("Enter the adding element:"))
	    os.adding(k,set1)
	    
	elif(n==2):
	    p=int(input("Enter the which elemen are removing"))
	    os.remove11(p,set1)
	elif(n==3):
	    print("set one :")
	    os.display(set1)
	    print("set two is:")
	    os.display(set2)
	    
	elif(n==5):
	    os.size1(set1)
	    
	elif(n==6):
	    os.intersection(set1,set2)
	elif(n==12):
		l=int(input("Enter the another set:"))
		os.adding(l,set2)
		
	elif(n==4):
		l=int(input("Enter the contains element :"))
		os.contains(l,set1)
	elif(n==7):
		os.uninon(set1,set2)
	elif(n==8):
		os.defferance(set1,set2)
	elif(n==9):
		print(os.subset(set1,set2))
	elif(n==10):
	    print("Exiting....")
	    
		
	else :
	    print("incorrect choice")
	    
		
	    
	
	
	




