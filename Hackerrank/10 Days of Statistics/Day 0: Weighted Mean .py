num=int(input())
X=list(map(int,input().split()))
W=list(map(int,input().split()))
print(round((sum([X[i]*W[i] for i in range(num)])/sum(W)),1))
