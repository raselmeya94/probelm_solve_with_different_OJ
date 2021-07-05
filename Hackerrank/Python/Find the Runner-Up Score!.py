if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    ss=set(arr)
    ls=list(sorted(ss))
    print(ls[len(ls)-2])
    
    
