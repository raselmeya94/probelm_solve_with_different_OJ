def mutate_string(string, position, character):
    #ls=list(string.split())
    ss=string[:position]+character+string[position+1:]
    return ss
