def main():
    N = int(input())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    for i in range(N):
        print(arr1[i] + arr2[N - i - 1], end=" ")


if __name__ == '__main__':
    main()