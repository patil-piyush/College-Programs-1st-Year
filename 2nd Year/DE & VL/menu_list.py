list1 = []
list2 = []

def option1a():
    ch = input("Enter the number of elements you want to enter")
    for i in range(int(ch)):
        list1.append(input(f"element at index {i+1}: "))
        
    print("list creation successful")
    
def option1b():
    ch=0
    ch= input("Enter the number of elements you want to enter")
    for i in range(int(ch)):
        list2.append(input(f"element at index {i+1}: "))
        
    print("list creation successful")
    
def option2a():
    Element = 

def option3():
    print("You selected Option 3.")

def option4a():
    ch = input("Enter the index of element that you want to display: ")
    print(list1[int(ch)-1])
    print("-----------------------------------------------------------------")
    
def option4b():
    ch = input("Enter the index of element that you want to display: ")
    print(list2[int(ch)-1])
    print("-----------------------------------------------------------------")
    
    
def option5():
    print("You selected Option 2.")

def option6():
    print("You selected Option 3.")
    
def option7():
    print("You selected Option 1.")

def option8():
    print("You selected Option 2.")

def option9():
    print("You selected Option 3.")

def option10():
    print("You selected Option 1.")

def option11():
    print("You selected Option 2.")

def optio12():
    print("You selected Option 3.")
    
    
def exit_program():
    print("Exiting the program.")

def display_menu():
    print("\nMenu:")
    print("1. Create a List")
    print("2. Add an Element at end")
    print("3. Add an Element at an specific index")
    print("4. Display an Element")
    print("5. Removing an element by element name")
    print("6. Removing an element by index")
    print("7. Removing an element by index using del keyword")
    print("8. Repeating list")
    print("9. concatinating list")
    print("10. Checking membership")
    print("11. Finding length of list")
    print("12. slicing list")
    print("13. Exit")

def main():
    while True:
        display_menu()
        choice = input("Enter your choice from above: ")

        if choice == '1':
            print("1. List A")
            print("2. List B")
            choice = input("Enter the option of list you want to create: ")
            if choice == '1':
                option1a()
            elif choice == '2':
                option1b()
        
        elif choice == '2':
            print("1. List A")
            print("2. List B")
            choice = input("Enter the option of list you want to add an element in: ")
            if choice == '1':
                option2a()
            elif choice == '2':
                option2b()
            
        elif choice == '3':
            print("1. List A")
            print("2. List B")
            choice = input("Enter the option of list you want to add an element in:: ")
            if choice == '1':
                option3a()
            elif choice == '2':
                option3b()
            
        elif choice == '4':
            print("1. List A")
            print("2. List B")
            choice = input("Enter the option of list you want to display the element from: ")
            if choice == '1':
                option4a()
            elif choice == '2':
                option4b()
                
        elif choice == '5':
            option5()
        elif choice == '6':
            option6()
        elif choice == '7':
            option7()
        elif choice == '8':
            option8()
        elif choice == '9':
            option9()
        elif choice == '10':
            option10()
        elif choice == '11':
            option11()
        elif choice == '12':
            option12()
        elif choice == '13':
            exit_program()
            break  # Exit the loop
        else:
            print("Invalid choice. Please enter a number between 1 and 4.")

if __name__ == "__main__":
    main()
