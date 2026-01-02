def add_task():
    n =  int(input("How many tasks do you want to add? "))
    for i in range (n):
        task = input ("Enter the task : ")
        with open("tasks.txt", "a") as f:
            f.write(task + "\n")
            print("Task Added Successfully")

def view_task():
    try :
        with open("tasks.txt" , "r") as f:
            tasks = f.readlines()
            if len(tasks) == 0 :
                print("No tasks found.")
            else :
                print("\nYour Tasks:")
                for i in range (len(tasks)):
                    print(f"{i + 1}. {tasks[i].strip()}") # f string for formatting like 1. Task1
            

    except FileNotFoundError:
        print("No task file found!")

def remove_task():       
        with open("tasks.txt", "r") as f:
            tasks = f.readlines()
            print("\nYour Tasks:")
            for i in range (len(tasks)):
                print(f"{i + 1}. {tasks[i].strip()}")

            task_num = int(input("Enter the task number to remove: "))
        if 0 < task_num <= len(tasks):
            removed_task = tasks.pop(task_num - 1)
            with open("tasks.txt", "w") as f:
                f.writelines(tasks)
            print(f"Removed task: {removed_task.strip()}")
        else:
            print("Invalid task number.")           
         
user = input("Do you want to see the To-Do List? (yes/no): ").strip().lower()
# strip() to remove any leading/trailing whitespace and lower() to standardize input
if user in ["yes", "y"]: #Same as user == "yes" or user == "y":
    while True:
        print("\n--- To-Do List ---")
        print("1. Add Task")
        print("2. View Tasks")
        print("3. Remove Task")
        print("4. Exit")

        choice = input("Enter your choice (1/2/3/4): ").strip()

        if choice == "1":
            add_task()
        elif choice == "2":
            view_task()
        elif choice == "4":
            print("Exiting the Tasks Menu. Goodbye!")
            break
        elif choice == "3":
            remove_task()
        else:
            print("Invalid choice. Please try again.")
        loopend = input("Do you want to continue in the Tasks Menu? (yes/no): ").strip().lower()
        if loopend in ["yes", "y"]:
            continue
        elif loopend in ["no", "n"]:
            print("Exiting the Tasks Menu. Goodbye!")
            break
        else:
            print("Invalid input. Exiting the Tasks Menu. Goodbye!")
            break
elif user in ["no", "n"]:
    print("You chose not to see the tasks menu. Exiting.")