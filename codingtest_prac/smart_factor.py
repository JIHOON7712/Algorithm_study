import sys
n,k = map(int,sys.stdin.readline().split());
count = 0

inp = list(sys.stdin.readline())
product_cnt=inp.count('H')
print(product_cnt)
print(len(inp))
distance = k
min_H=10
flag=0


while(inp.count(0) != product_cnt):
    min_H=10
    for i in range(len(inp)-1):
        if inp[i] != 'P' and inp[i] != 0 and inp[i] != 'F':
            cnt=0
            for j in range(i-k,i+k+1):
                if i==j or j<0 or j>=len(inp):
                    continue;
                else:
                    if inp[j] == 'P':
                        cnt+=1
            inp[i] = cnt
            if(inp[i] !=0) :
                if(min_H>inp[i]):
                    min_H = inp[i]
    
    for i2 in range(len(inp)):
        if(inp[i2] == min_H):
            for j2 in range(i2-k,i2+k+1):
                if i2==j2 or j2<0 or j2>=len(inp):
                    continue;
                else:
                    if inp[j2] == 'P':
                        inp[j2] = 'F'
                        inp[i2] = 0
                        count +=1
    print(inp,'\n')
    print(count)
