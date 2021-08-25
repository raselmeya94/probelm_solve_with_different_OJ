from collections import Counter
num=int(input())
ls=list(map(int,input().split()))
ls=sorted(ls)
print(sum(ls)/len(ls))
if len(ls)%2==1:
    print(ls[len(ls)//2 +1])
else:
    print((ls[len(ls)//2]+ls[len(ls)//2 -1])/2)

DC=Counter(sorted(ls))
print(DC.most_common()[0][0] )
