inp=int(input())

for i in range(inp,0,-1):
    for j in range(i-1):    
        print(' ',end='')
    for k in range(inp-i+1):
        print('*',end='')
    print()