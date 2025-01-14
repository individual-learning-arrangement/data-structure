def modulo(a, b):
    while a >= b:
        a -= b
    return a

def main():
    a, b = map(int, input().split())
    print(modulo(a, b))


if __name__ == '__main__':
    main()