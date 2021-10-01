import numpy
num,val=map(int, input().split())
lss=[]
for i in range(num):
    ls =list(map(int, input().split()))
    lss.append(ls)
n_array=numpy.array(lss)
print(max(numpy.min(lss,axis=1)))
