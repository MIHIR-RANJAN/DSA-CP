a=int(input("enter the number: "))
if a>1:
    for i in range(2,a):
        if (a%i) == 0:
            print(a," is not prime number, it is composite number")
            break
        else:
            print(a,"is prime number")
            break
else:
    print(a,"is not prime number")
    