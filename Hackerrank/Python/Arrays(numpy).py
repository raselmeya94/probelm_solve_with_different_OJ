import numpy
def arrays(arr):
    # complete this function
    # use numpy.array
    ls=numpy.array(arr[::-1],float)
    return ls

arr = input().strip().split(' ')
result = arrays(arr)
print(result)
