def option1():
    list = []
    choice2=0
    choice2 = input("Enter the number of elements you want to enter")
    for i in range(int(choice2)):
        list.append(input(f"element at index {i+1}: "))
        
    print("list creation successful")
    
def option2():
    print("You selected Option 2.")

def option3():
    print("You selected Option 3.")

def option4():
    print("You selected Option 1.")

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
            option1()
        elif choice == '2':
            option2()
        elif choice == '3':
            option3()
        elif choice == '4':
            option4()
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
