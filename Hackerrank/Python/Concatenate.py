import numpy 
n,m,p=list(map(int,input().split()))
numpy_array=[]
for _ in range(n+m):
    ls=list(map(int, input().split()))
    numpy_array.append(ls)
    
print(numpy.array(numpy_array))
