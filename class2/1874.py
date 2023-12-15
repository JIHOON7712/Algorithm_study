N = int(input())
answer = []
index = 0

arr = [0] * N  # 아직 stack에 안들어감
for _ in range(N):
    if index<0:
        index =0
    inp = int(input()) -1   #입력 받은 수를 index화
    if arr[inp] == 0:
        while index != inp :
            if arr[index] == 0:
                answer.append("+")
                arr[index] = 1
                index +=1
            elif arr[index] == -1 or arr[index] == 1:
                index +=1
        answer.append("+")
        answer.append("-")
        arr[index] = -1
        index -=1
    else :
        while index != inp :
            if arr[index] == 1:
                print("NO")
                exit()
            elif arr[index] == -1:
                index -=1
        answer.append("-")
        arr[index] = -1
        index -=1

print(*answer,sep = '\n')