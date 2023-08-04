times = int(input())
result = []

for _ in range(times):
    size,point = map(int,input().split())
    pri = list(map(int,input().split()))

    count = 0

    while(True):
        maxindex = pri.index(max(pri))

        if(maxindex == point):
            result.append(count+1)
            break
        elif(point < maxindex):
            point = size-(maxindex+1)+point
        else:
            point = point - (maxindex+1)
        temp = pri[0:maxindex]
        pri = pri[maxindex+1:]
        pri.extend(temp)
        size-=1
        count += 1

for i in result:
    print(i)
        

