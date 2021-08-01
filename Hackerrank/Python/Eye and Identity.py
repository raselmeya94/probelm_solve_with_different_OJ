import numpy
n,m=list(map(int,input().split()))
numpy.set_printoptions(legacy='1.13')
print(numpy.eye(n,m))
