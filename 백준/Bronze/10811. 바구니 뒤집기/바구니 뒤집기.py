N,M=map(int,input().split())
lst=[x for x in range(1,N+1)]
for _ in range(M):
    i,j= map(int,input().split())
    lst[i-1:j]=reversed(lst[i-1:j])
print(*lst)