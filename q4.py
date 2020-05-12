MOD=10^9+7
def calc(n):
    if n < 0:
        return 1
    arr = [0 for i in range(n+2)]
    arr[0] = arr[1] = 1

    for i in range(2,n+1):
        for j in range(i+1):
            arr[i] = (arr[i] + arr[j] * arr[i-j-1]) % MOD

    return arr[n]

def solve(A):
    return calc(A-1)

A = 5
print(solve(A))
