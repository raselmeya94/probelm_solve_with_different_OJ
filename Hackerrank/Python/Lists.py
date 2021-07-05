ans=[]
n= int(input())
for i in range (n):
      x= input()
      
      lis=x.split()
      #print(lis)
      if lis[0]=='insert':
            ans.insert(int(lis[1]), int(lis[2]))
      elif lis[0]=='append':
            ans.append(int(lis[1]))
      elif lis[0]=='print':
            print(ans)
      elif lis[0]=='remove':
            ans.remove(int(lis[1]))
      elif lis[0]=='sort':
            ans.sort()
      elif lis[0]=='pop':
            ans.pop()
      elif lis[0]=='reverse':
            ans.reverse()
