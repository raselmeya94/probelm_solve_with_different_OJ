num= int(input())
Set=set(map(int, input().split()))
Q=int(input())
for q in range(Q):
    command= list(input().split())
    if(len(command)==1):
        Set.pop()
    elif command[0]=='remove':
        val=int(command[1])
        if val in Set:
            Set.remove(val)
    else:
        if command[0]=="discard":
            val=int(command[1])
            if val in Set:
                Set.discard(val)
print(sum(Set))

