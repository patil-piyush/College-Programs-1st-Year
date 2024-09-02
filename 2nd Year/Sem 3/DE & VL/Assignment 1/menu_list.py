list1 = []
list2 = []

def create_list_a():
    ch = input("Enter the number of elements you want to enter: ")
    for i in range(int(ch)):
        list1.append(input(f"Element at index {i+1}: "))
    print("List A creation successful")

def create_list_b():
    ch = input("Enter the number of elements you want to enter: ")
    for i in range(int(ch)):
        list2.append(input(f"Element at index {i+1}: "))
    print("List B creation successful")

def add_element_to_end_a():
    element = input("Enter the element you want to add: ")
    list1.append(element)
    print("Element added successfully to List A")

def add_element_to_end_b():
    element = input("Enter the element you want to add: ")
    list2.append(element)
    print("Element added successfully to List B")

def add_element_at_index_a():
    index = int(input("Enter the index where you want to add the element: ")) - 1
    element = input("Enter the element you want to add: ")
    list1.insert(index, element)
    print("Element added successfully to List A")

def add_element_at_index_b():
    index = int(input("Enter the index where you want to add the element: ")) - 1
    element = input("Enter the element you want to add: ")
    list2.insert(index, element)
    print("Element added successfully to List B")

def display_list_a():
    if list1:
        print("List A:", list1)
    else:
        print("List A is empty.")
    print("-----------------------------------------------------------------")

def display_list_b():
    if list2:
        print("List B:", list2)
    else:
        print("List B is empty.")
    print("-----------------------------------------------------------------")

def remove_element_by_name():
    element = input("Enter the element you want to remove: ")
    if element in list1:
        list1.remove(element)
        print("Element removed successfully from List A")
    elif element in list2:
        list2.remove(element)
        print("Element removed successfully from List B")
    else:
        print("Element not found in either list")

def remove_element_by_index():
    index = int(input("Enter the index of the element you want to remove: ")) - 1
    if 0 <= index < len(list1):
        removed_element = list1.pop(index)
        print(f"Element '{removed_element}' removed successfully from List A")
    elif 0 <= index < len(list2):
        removed_element = list2.pop(index)
        print(f"Element '{removed_element}' removed successfully from List B")
    else:
        print("Invalid index")

def remove_element_by_del():
    index = int(input("Enter the index of the element you want to remove using del keyword: ")) - 1
    if 0 <= index < len(list1):
        del list1[index]
        print("Element removed successfully from List A using del")
    elif 0 <= index < len(list2):
        del list2[index]
        print("Element removed successfully from List B using del")
    else:
        print("Invalid index")

def repeat_list():
    times = int(input("Enter how many times you want to repeat the lists: "))
    print("Repeating List A:", list1 * times)
    print("Repeating List B:", list2 * times)

def concatenate_lists():
    combined_list = list1 + list2
    print("Concatenated list:", combined_list)

def check_membership():
    element = input("Enter the element you want to check for membership: ")
    if element in list1:
        print(f"'{element}' is in List A")
    elif element in list2:
        print(f"'{element}' is in List B")
    else:
        print(f"'{element}' is not in either List A or List B")

def find_length():
    print("Length of List A:", len(list1))
    print("Length of List B:", len(list2))

def slice_list():
    start = int(input("Enter the start index for slicing: ")) - 1
    end = int(input("Enter the end index for slicing: "))
    print("Sliced List A:", list1[start:end])
    print("Sliced List B:", list2[start:end])

def exit_program():
    print("Exiting the program.")

def display_menu():
    print("\nMenu:")
    print("1. Create a List")
    print("2. Add an Element at end")
    print("3. Add an Element at a specific index")
    print("4. Display an Entire List")
    print("5. Remove an element by element name")
    print("6. Remove an element by index")
    print("7. Remove an element by index using del keyword")
    print("8. Repeat list")
    print("9. Concatenate lists")
    print("10. Check membership")
    print("11. Find length of list")
    print("12. Slice list")
    print("13. Exit")

def main():
    while True:
        display_menu()
        choice = input("Enter your choice from above: ")

        if choice == '1':
            print("1. List A")
            print("2. List B")
            list_choice = input("Enter the option of list you want to create: ")
            if list_choice == '1':
                create_list_a()
            elif list_choice == '2':
                create_list_b()
        
        elif choice == '2':
            print("1. List A")
            print("2. List B")
            list_choice = input("Enter the option of list you want to add an element in: ")
            if list_choice == '1':
                add_element_to_end_a()
            elif list_choice == '2':
                add_element_to_end_b()
            
        elif choice == '3':
            print("1. List A")
            print("2. List B")
            list_choice = input("Enter the option of list you want to add an element in: ")
            if list_choice == '1':
                add_element_at_index_a()
            elif list_choice == '2':
                add_element_at_index_b()
            
        elif choice == '4':
            print("1. List A")
            print("2. List B")
            list_choice = input("Enter the option of list you want to display: ")
            if list_choice == '1':
                display_list_a()
            elif list_choice == '2':
                display_list_b()
                
        elif choice == '5':
            remove_element_by_name()
        elif choice == '6':
            remove_element_by_index()
        elif choice == '7':
            remove_element_by_del()
        elif choice == '8':
            repeat_list()
        elif choice == '9':
            concatenate_lists()
        elif choice == '10':
            check_membership()
        elif choice == '11':
            find_length()
        elif choice == '12':
            slice_list()
        elif choice == '13':
            exit_program()
            break  # Exit the loop
        else:
            print("Invalid choice. Please enter a number between 1 and 13.")

if __name__ == "__main__":
    main()
