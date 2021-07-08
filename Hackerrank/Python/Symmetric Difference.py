def diff(arr1 , arr2):
    # your code goes here
    un=arr1.union(arr2)
    inter=arr1.intersection(arr2)
    return un.difference(inter)
    

if __name__ == '__main__':
    n = int(input())
    arr1 = set(list(map(int, input().split())))
    m=int(input())
    arr2=set(list(map(int, input().split())))
    print("\n".join([ it for it in sorted(list(diff(arr1, arr2)))]))
    
    
    
 
