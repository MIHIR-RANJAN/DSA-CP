b=int(input("enter the no of rows: "))
a=b+2
for i in range(1,a+1):
    for j in range(1,i):
        print(" ",end=' ')
    for j in range(1,a-i):
        print("*",end=" ")
    print()
        