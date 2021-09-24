#include <iostream>
#include <string>

#include "LinkedList.h"
#include "ToDo.h"


int main()
{
    int input;
    int priority;
    std::string task;
    ToDo myToDo;

    do
    {
        myToDo.displayMenu();
        std::cin >> input;
        if (input == 1)
        {
            myToDo.displayList();

            std::cout << "What is the priority of your new task?" << std::endl;
            std::cin >> priority;

            std::cout << "What is your new task?" << std::endl;
            std::cin.ignore();
            std::getline(std::cin, task);

            myToDo.add(priority, task);

        }
        else if (input == 2)
        {
            myToDo.displayList();
            std::cout << "Please select which task you've completed" << std::endl;
            std::cin >> priority;
            myToDo.remove(priority);
        }
        else if (input == 3)
        {
            myToDo.displayList();
        }
        else if (input == 4)
        {
            myToDo.clear();
        }

    } while (input != 0);


    return 0;


}