N,M = map(int,input().split())
result=[0]*(N)
for a in range(N):
    result[a]=a+1
for b in range(M):
    i,j=map(int,input().split())
    result[i-1], result[j-1]=result[j-1],result[i-1]
print(*result)