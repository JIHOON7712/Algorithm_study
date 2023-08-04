x,y=map(int,input().split())

def gcd(x,y):
    mod =1
    if(y>x):
        x,y=y,x
    while(mod!=0):
        mod = x%y
        x=y
        y=mod
    return x

def lcm(x,y):
    a=x*y/gcd(x,y)
    return int(a)

    
print(gcd(x,y))
print(lcm(x,y))