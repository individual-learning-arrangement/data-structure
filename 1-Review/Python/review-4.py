def main():
    str = input().strip()
    str_len = len(str)

    for i in range(str_len):
        print(str)
        str = str[1:] + str[0]

if __name__ == '__main__':
    main()