#1+1/2+1/3+....+1/n#
a=int(input("enter the limit: "))
sum=0
for i in range(1,a+1):
    sum=sum+1/i
print(sum)
