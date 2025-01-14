def swap(a, b):
    tmp = a
    a = b
    b = tmp
    return a, b

def main():

    N = int(input())
    arr = list(map(int, input().split()))
    a, b = map(int, input().split())

    arr[a], arr[b] = swap(arr[a], arr[b])

    print(*arr)

    return

if __name__ == '__main__':
    main()