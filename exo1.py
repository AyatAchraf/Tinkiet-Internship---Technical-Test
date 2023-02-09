# This Program is using to print numbers from 1 to 100,excepting The multiples of 3,5and 7 that show  respectively 
#strings (Hello,World,Yoo)
for j in range(1,101):
    
    if j % 3 == 0 and j % 5 == 0:
        print(" Hello World,",end='')
    elif j % 3 == 0 and j % 7 == 0:
        print(" Hello Yoo,",end='')
    elif j % 5 == 0 and j % 7 == 0:
        print(" World Yoo,",end='')
    elif j % 3 == 0:
        print(" Hello,",end='')
    elif j % 5 == 0:
        print(" World,",end='')
    elif j % 7 == 0:
        print(" Yoo,",end='')
    else:
        print(" ",j,end='')