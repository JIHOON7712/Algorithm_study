A,B,V = map(int,input().split())
interval = A -B # 하루에 가는 양
if (V-A) % interval == 0:
    print(int(((V-A)//interval))+1)
else:
     print(int(((V-A)//interval))+2)