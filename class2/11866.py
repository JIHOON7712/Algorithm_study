size,interval = map(int,input().split())
result = []
interval = interval -1

l = [i+1 for i in range(size)]
cur = 0 
while(len(l) != 0):
    ncur = cur + interval
    if(ncur < len(l)):
        cur = ncur
        result.append(str(l[cur]))
        l.pop(cur)
    elif(ncur >= len(l)):
        while(ncur >= len(l)):
            ncur = ncur - len(l)
        cur = ncur
        result.append(str(l[cur]))
        l.pop(cur)

print("<",", ".join(result)[:],">", sep='')