while 1:
    stack =[]
    inp = input() 
    if(inp[0] == '.'):
        exit()
    
    for x in inp:
        if x == '(' or x == '[':
            stack.append(x)
        elif x==')' or x==']':
            if len(stack) == 0:
                stack.append(x)
                break
            if x==')':
                if stack[-1] !='(':
                    break
                else:
                    stack.pop()
            elif x==']':
                if stack[-1] !='[':
                    break
                else:
                    stack.pop()
    if len(stack) == 0: print("yes")
    else : print("no")