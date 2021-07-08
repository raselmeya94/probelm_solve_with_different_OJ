def average(array):
    # your code goes here
    ss=set(array)
    return sum(ss)/len(ss)
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
