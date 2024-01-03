N = int(input())
arr = [int(input()) for _ in range(N)]

def round2(num): # 사사오입
    return int(num) + (1 if num - int(num) >= 0.5 else 0)

ex = round2(N*0.15)
arr.sort()
arr = arr[ex:N-ex]
if(len(arr)!=0) :   
    print(round2(sum(arr)/len(arr)))
else:
    print(0)