a,b=map(int,input().split())
x=0
y=0
r=[0,0,0]
for _ in range(3):
    x= x*10+ a%10
    y = y*10+b%10
    a=a//10 
    b=b//10
m = max(x,y)
print(m)