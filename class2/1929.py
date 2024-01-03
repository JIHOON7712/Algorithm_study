M,N = map(int,input().split())
arr = [True]*(N+1)
arr[0] = False
arr[1] = False

def Prime(a):
    for i in range(2, int(N**0.5) + 1):
        if arr[i] == True:
            for j in range(i*2, N + 1, i):
                arr[j] = False
Prime(N)
for i in range(M,N+1):
    if(arr[i]==True):
        print(i)