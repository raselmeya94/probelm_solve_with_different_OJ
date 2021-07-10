if __name__ == '__main__':
    (k, A) = (int(input()),list(map(int, input().split())))
    s=set(A)
    print((sum(s)*k -sum(A))//(k-1))
