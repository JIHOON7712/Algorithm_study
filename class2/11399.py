import sys
input = sys.stdin.readline

N = int(input())
inp = list(map(int,input().split()))
inp.sort()

wait_time = 0
total = 0

for i in range(N):
    total = total + wait_time + inp[i]
    wait_time += inp[i]

print(total)