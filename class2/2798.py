# https://www.acmicpc.net/problem/2798
N,M = map(int,input().split())
inp = list(map(int,input().split()))

def blackJack(N,M,inp):
    result = 0
    for i in range(N):
        for j in range(i+1,N):
            for k in range(j+1,N):
                sum = inp[i]+inp[j]+inp[k]
                if sum <= M:
                    result = max(result,sum)
    return result

print(blackJack(N,M,inp))