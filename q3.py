import math

def solve(A):
    k = math.sqrt(2*A)
    if(k==0):
        return 0
    if(A-k*(k+1)/2>=0):
        return k
    else:
        return k-1

A=10
print(math.ceil(solve(A)))
