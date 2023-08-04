num = int(input())

inp=[]
for _ in range(num):
    x,y = map(int,input().split())
    inp.append([x,y])
    

inp.sort(key = lambda x: (x[1],x[0]))

for i in inp:
    print(i[0],i[1])