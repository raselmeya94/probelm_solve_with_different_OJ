def count_substring(string, sub_string):
    cnt=int(0)
    for i in range(len(string)):
        if(string[i:i+len(sub_string)]==sub_string):
            cnt+=1
            
    return cnt 

