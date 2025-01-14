def prefixAverages1(X, n):
    n = len(X)
    A = []
    for i in range(n):
        sum_ = sum(X[:i+1])
        A.append(int(sum_ / (i + 1) + 0.5))

    return A

def prefixAverages2(X, n):
    n = len(X)
    A = []
    sum_ = 0
    for i in range(n):
        sum_ += X[i]
        A.append(int(sum_ / (i + 1) + 0.5))

    return A

def main():
    n = int(input())

    X = []
    X = list(map(int, input().split()))

    A1 = prefixAverages1(X, n)
    A2 = prefixAverages2(X, n)

    print(' '.join(map(str, A1)))
    print(' '.join(map(str, A2)))

if __name__ == '__main__':
    main()