cube= lambda x: x*x*x
ls=[]
def fibonacci(n):
    a = 0
    b = 1
    sum = 0
    count = 1
    while(count <= n):
        ls.append(sum)
        count += 1
        a = b
        b = sum
        sum = a + b
    return ls
if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))
