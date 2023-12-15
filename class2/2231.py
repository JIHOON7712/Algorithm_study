N = int(input())
flag =0
for i in range(1,N):
    sum = i
    for k in str(i):
        sum += int(k)
    if sum == N:
        flag =1
        print(i)
        break
if flag == 0:
    print(0)