K, N = map(int ,input().split())

inp = []
for _ in range(K):
    inp.append(int(input())) 

backup = 0
start = 1
end = max(inp)

while(start <= end ):
    sum = 0
    mid = (start + end) // 2
    for i in range(K):
        sum = sum + inp[i] // mid 
        if(sum >= N):
            backup = mid
            start = mid+1
            break
    if(sum < N):
        end = mid-1

print(backup)