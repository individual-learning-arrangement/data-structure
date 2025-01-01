def ABC(arr, i):
    max = arr[i]
    max_index = i

    for j in range(i, len(arr)):
        if(max < arr[j]):
            max = arr[j]
            max_index = j

    arr[max_index], arr[i] = arr[i], arr[max_index]

def main():
    arr = []
    arr = list(map(int, input().split()))
    
    for i in range(9):
        ABC(arr, i)

    print(" ".join(map(str, arr)))        

if __name__ == '__main__':
    main()