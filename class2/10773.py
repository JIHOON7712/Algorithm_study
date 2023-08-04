num = int(input())
stack = []

for _ in range(num):
    inp = int(input())
    if(inp == 0):
        stack.pop()
    else:
        stack.append(inp)

print(sum(stack))
