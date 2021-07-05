n = int(input())
dic={}
for i in range(n):
    ls=list(input().split())
    dic[ls[0]]=[float(ls[i]) for i in range(1,4)]

q=input()
print("%.2f" %(sum(dic[q])/3))

