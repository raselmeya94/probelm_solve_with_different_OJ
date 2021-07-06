def swap_case(ss):
    ans = ''
    for c in ss:
        s = str(c)
        if s.isupper() == True:
            ans += s.lower()
        else:
            ans += s.upper()
    return ans

