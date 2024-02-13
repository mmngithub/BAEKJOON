N,M= map(int, input().split())
result=[0]*(N)
for a in range(M):
    i,j,k=map(int,input().split())
    for b in range(i-1,j):
        result[b]=k
print(*result)