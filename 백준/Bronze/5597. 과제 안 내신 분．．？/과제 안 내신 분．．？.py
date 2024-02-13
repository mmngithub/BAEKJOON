lst=[i for i in range(1,31)]
for i in range(28):
    x=int(input())
    lst.remove(x)
print(min(lst))
print(max(lst))