times = int(input())

for _ in range(times):
    floor = int(input())
    unit = int(input())

    stats = [i+1 for i in range(unit)]

    for i in range(1,floor+1):
        for j in range(1,unit):
            stats[j] = stats[j-1]+stats[j]
    
    print(stats[-1])