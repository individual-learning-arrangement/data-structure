def mostOnes(arr, n):
    i, j, row = 0, 0, 0
    while i < n and j < n:
        if arr[i][j] == 0:
            i += 1
        else:
            row = i
            j += 1
            
    return row

def main():
    n = int(input())

    arr = []
    for _ in range(n):
        arr.append(list(map(int, input().split())))
    
    max_row = mostOnes(arr, n)
    print(max_row)


if __name__ == '__main__':
    main()