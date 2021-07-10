from collections import Counter
if __name__ == '__main__':
    (k, A) = (int(input()),list(map(int, input().split())))
    ls=Counter(A)
    kk=ls.keys()
    for val in kk:
        if ls[val]==1:
            print(val)
