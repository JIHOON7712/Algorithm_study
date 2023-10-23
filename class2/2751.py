import heapq

n = int(input())
heap = []

for _ in range(n):
    data = int(input())
    heap.append(data)

heapq.heapify(heap)

for i in range(n):
    print(heapq.heappop(heap))