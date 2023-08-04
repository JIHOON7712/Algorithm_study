from collections import deque

inp = int(input())
card = deque()

for i in range(1,inp+1):
    card.append(i)

while len(card) != 1:
    card.popleft()
    last = card.popleft()
    card.append(last)

print(card[0])