students = []
class Student:
    def __init__(self, name, roll_number, marks):
        self.name = name
        self.roll_number = roll_number
        self.marks = marks
    
    def calculate_sum(self):
        return sum(self.marks.values())
    
    def calculate_average(self):
        return self.calculate_sum() / len(self.marks)
    
    def display_information(self):
        print(f"\nStudent Name: {self.name}")
        print(f"Roll Number: {self.roll_number}")
        for subject, mark in self.marks.items():
            print(f"{subject}: {mark}")
        print(f"Total Marks: {self.calculate_sum()}")
        print(f"Average Marks: {self.calculate_average():.2f}")

def add_student():
    name = input("\nEnter student's name: ")
    roll_number = int(input("Enter roll number: "))
    marks = {}
    marks['Physics'] = int(input("Enter Physics marks: "))
    marks['Chemistry'] = int(input("Enter Chemistry marks: "))
    marks['Maths'] = int(input("Enter Maths marks: "))
    new_student = Student(name, roll_number, marks)
    students.append(new_student)
    print("Student added successfully.\n")

def display_students():
    if not students:
        print("\nNo students have been added yet.\n")
        return
    for student in students:
        student.display_information()
        print("")

def main():
    while True:
        print("\n1. Add a Student")
        print("2. Display all Students")
        print("3. Exit\n")
        choice = input("Enter your choice (1/2/3): ")
        
        if choice == '1':
            add_student()
        elif choice == '2':
            display_students()
        elif choice == '3':
            print("\nExiting program.")
            break
        else:
            print("Invalid choice. Please try again.\n")

if __name__ == "__main__":
    main()