def sum(i):
    sum = 0
    for j in range (1, i + 1):
        sum += j
    
    return sum

def main():
    X = int(input())
    
    total = 0
    for i in range(1, X + 1):
        total += sum(i)

    print(total)

if __name__ == '__main__':
    main()

    