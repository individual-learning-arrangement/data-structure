class Time:
    def __init__(self, hour, minute, second):
        self.hour = hour
        self.minute = minute
        self.second = second

def main():
    time = []

    for _ in range(2):
        hour, minute, second = map(int, input().split())
        time.append(Time(hour, minute, second))
    
    total1 = time[0].hour * 3600 + time[0].minute * 60 + time[0].second
    total2 = time[1].hour * 3600 + time[1].minute * 60 + time[1].second

    diff = abs(total2 - total1)
    print(diff // 3600, (diff // 60) % 60, diff % 60)

if __name__ == '__main__':
    main()