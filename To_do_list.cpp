#include <iostream>
#include <vector>
#include <string>


void displayMenu() {
    std::cout << "===== To-Do List Manager =====\n";
    std::cout << "1. Add Task\n";
    std::cout << "2. View Tasks\n";
    std::cout << "3. Delete Task\n";
    std::cout << "4. Quit\n";
    std::cout << "==============================\n";
    std::cout << "Enter your choice: ";
}

int main() {
    std::vector<std::string> tasks; 

    while (true) {
        displayMenu(); 
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: 
                {
                    std::cin.ignore(); 
                    std::cout << "Enter task description: ";
                    std::string task;
                    std::getline(std::cin, task);
                    tasks.push_back(task);
                    std::cout << "Task added!\n";
                }
                break;
            case 2: 
                {
                    std::cout << "Tasks:\n";
                    for (size_t i = 0; i < tasks.size(); ++i) {
                        std::cout << i + 1 << ". " << tasks[i] << "\n";
                    }
                }
                break;
            case 3: 
                {
                    std::cout << "Enter the task number to delete: ";
                    int taskNumber;
                    std::cin >> taskNumber;

                    if (taskNumber >= 1 && taskNumber <= static_cast<int>(tasks.size())) {
                        tasks.erase(tasks.begin() + taskNumber - 1);
                        std::cout << "Task deleted!\n";
                    } else {
                        std::cout << "Invalid task number!\n";
                    }
                }
                break;
            case 4: 
                std::cout << "Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
