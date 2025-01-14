class Student:
    def __init__(self, name, score):
        self.name = name
        self.score = score

def main():
    students = []
    total = 0

    for _ in range(5):
        name, score = input().split()
        score = int(score)
        students.append(Student(name, score))
        total += score

    avg = total / 5.0

    for student in students:
        if avg >= student.score:
            print(student.name)

if __name__ == '__main__':
    main()