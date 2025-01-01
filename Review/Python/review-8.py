class Student:
    def __init__(self, name, korean, english, math):
        self.name = name
        self.korean = korean
        self.english = english
        self.math = math
        self.avg = (korean + english + math) / 3.0

def main():
    N = int(input())
    
    students = []
    for _ in range(N):
        name, korean, english, math = input().split()
        korean, english, math = int(korean), int(english), int(math)
        students.append(Student(name, korean, english, math))
    
    for student in students:
        print(f"{student.name} {student.avg:.1f}", end=" ")

        if student.korean >= 90 or student.english >= 90 or student.math >= 90:
            print("GREAT", end=" ")
        
        if student.korean < 70 or student.english < 70 or student.math < 70:
            print("BAD", end=" ")
        
        print()

if __name__ == '__main__':
    main()