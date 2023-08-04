num = int(input())

size = []
for _ in range(num):
    x,y = map(int,input().split())
    size.append([x,y])

for i in range(num):
    count=0
    for j in range(num):
        if((size[i][0] < size[j][0]) and (size[i][1] < size[j][1])):
            count += 1
    print(count+1)
