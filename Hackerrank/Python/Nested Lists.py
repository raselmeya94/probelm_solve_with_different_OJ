n = int(input())
marksheet = [[input(), float(input())] for _ in range(n)]
cap=(sorted(marksheet))
num=sorted(list(set( val for name, val in marksheet)))
second=num[1]
for name, mark in cap:
    if mark==second:
        print(name)
