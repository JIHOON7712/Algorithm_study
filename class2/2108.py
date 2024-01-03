import sys
input = sys.stdin.readline

times = int(input())
arr = [int(input()) for i in range(times)]

print(round(sum(arr)/len(arr)))
arr.sort()
print(arr[len(arr)//2])
count = {}
for i in arr:
    if i not in count:
        count[i] = 1
    else:
        count[i] = count[i]+1
max=max(count.values())
max_key=[]
for j in count.keys():
    if(count[j]==max):
        max_key.append(j)
if(len(max_key)>1):
    max_key.sort()
    print(max_key[1])
else:
    print(max_key[0])
print(arr[-1]-arr[0])