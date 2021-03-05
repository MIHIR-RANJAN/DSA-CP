Test=int(input())
for __ in range(Test):
    sen = input()
    first=0
    second=0
    third=0
    other=''
    if (sen[0] == sen[-1]):
        print ("NO")
        continue
    for i in sen:
        if (i == sen[0]):
            first=first+1
        
        elif(i== sen[-1]):
            third=third+1
        else:
            second=second+1
            other = i
    case1 = first + second - third
    case2 = first - second - third
    brac=''
    if (case1 == 0):
        for i in sen:
            if (i==sen[0] or i == other):
                brac+= '('
            else:
                brac+=')'
        addition=0
        for i in brac:
            if (i == "("):
                addition =addition + 1
            
            else:
                addition = addition - 1
            if (addition < 0):
                print("NO")
                break
        if (addition == 0):
            print("YES")
        elif (addition > 0):
            print("NO")
    
    
    
    
    
    
    
    
    
    elif (case2 == 0):
        for i in sen:
            if (i == sen[0]):
                brac+= '('
            else:
                brac+=')'
        addition=0
        for i in brac:
            if (i == "("):
                addition += 1
            else:
                addition -= 1
            if (addition < 0):
                print("NO")
                break
        if (addition == 0):
            print("YES")
        elif (addition > 0):
            print("NO")
    
    
    else:
        print("NO")
        continue   