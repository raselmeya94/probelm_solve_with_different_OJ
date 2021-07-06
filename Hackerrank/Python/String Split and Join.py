def split_and_join(line):
    # write your code here
    return "-".join(line)

if __name__ == '__main__':
    line = list(input().split())
    result = split_and_join(line)
    print(result)
