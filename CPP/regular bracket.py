def reg_brac(bracket):
    sum=0
    for i in bracket:
        if (i == "("):
            sum += 1
        
        else:
            sum -= 1
        if (sum < 0):
            print("NO")
            break
    if (sum == 0):
        prin("YES")
    elif (sum > 0):
        print("NO")


t=int(input())
for _ in range(t):
    s = input()
    a=0
    b=0
    c=0
    other=''
    if (s[0] == s[-1]):
        print ("NO")
        continue
    for i in s:
        if (i == s[0]):
            a=a+1
        
        elif(i== s[-1]):
            c=c+1
        else:
            b=b+1
            other = i
    case1 = a + b - c
    case2 = a - b - c
    brac=''
    if (case1 == 0):
        for i in s:
            if (i==s[0] or i == other):
                brac+= '('
            else:
                brac+=')'
        reg_brac(brac)
    elif (case2 == 0):
        for i in s:
            if (i == s[0]):
                brac+= '('
            else:
                brac+=')'
        reg_brac(brac)
    else:
        print("NO")
        continue