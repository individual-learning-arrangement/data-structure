def rSum(N):
    if N == 1:
        return 1
    else:
        return N + rSum(N - 1)

def main():
    N = int(input())
    
    print(rSum(N))

if __name__ == '__main__':
    main()