num1= int(input())
Set1=set(map(int, input().split()))
num2= int(input())
Set2=set(map(int, input().split()))
print(len(Set1.symmetric_difference(Set2)))