def solve(N):
    n=list(str(N))
    d={}
    for i in n:
        if i in d:
            d[i]+=1
        else:
            d[i]=1
    for i in d:
        if int(i)!=d[i]:
            return False
    return True
def beautifulNumber (N):
    i=1
    while(True):
        if solve(N+i):
            return(N+i)
        i=i+1
N = int(input())