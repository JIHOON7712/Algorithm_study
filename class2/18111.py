import sys
N,M,B = map(int, input().split())

ground = []
for _ in range(N):
    inp = list(map(int,input().split()))
    ground.append(inp)

time = sys.maxsize  # 캐는 건 2초, 바로 놓는 건 1초
floor_max = 0

for floor in range(257):
    exceed = 0
    lack = 0
    for i in range(N):
        for j in range(M):
            if ground[i][j] > floor:
                exceed += ground[i][j] - floor
            else:
                lack += floor - ground[i][j]
    if(exceed+B >= lack):
        if(exceed*2 + lack <=time):
            time = exceed*2 + lack
            floor_max = floor

print(time,floor_max)