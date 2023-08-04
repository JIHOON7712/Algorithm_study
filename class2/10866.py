from collections import deque
import sys

lines = int(input())

deque = deque()
for _ in range(lines):
    inp = sys.stdin.readline().split()
    if(inp[0] == "push_front"):
        deque.appendleft(inp[1])
    elif(inp[0] == "push_back"):
        deque.append(inp[1])
    elif(inp[0] == "pop_front"):
        if(len(deque) == 0):
            print(-1)
        else:
            print(deque.popleft())
    elif(inp[0] == "pop_back"):
        if(len(deque) == 0):
            print(-1)
        else:
            print(deque.pop())
    elif(inp[0] == "size"):
        print(len(deque))
    elif(inp[0] == "empty"):
        if(len(deque) == 0):
            print(1)
        else:
            print(0)
    elif(inp[0] == "front"):
        if(len(deque) == 0):
            print(-1)
        else:
            print(deque[0])
    elif(inp[0] == "back"):
        if(len(deque) == 0):
            print(-1)
        else:
            print(deque[-1])