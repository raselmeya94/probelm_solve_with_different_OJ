from collections import defaultdict
a,b=map(int, input().split())
d_dict=defaultdict(list)
for i in range(a):
    word=input()
    d_dict[word].append(i+1)
for _ in range(b):
    inp=input()
    if len(d_dict[inp])>0:
        print(*[item for item in d_dict[inp]])
    else:
        print(-1)
