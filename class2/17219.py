import sys
input = sys.stdin.readline

password = {}

N, M = map(int , input().split())

for _ in range(N):
    sitename, key = input().split()
    password[sitename] = key

for _ in range(M):
    site = input().rstrip()
    print(password[site])