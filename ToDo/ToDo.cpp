#include "ToDo.h"

void ToDo::displayMenu()
{
    std::cout << "1. Add Task" << std::endl;
    std::cout << "2. Complete Task" << std::endl;
    std::cout << "3. Display List" << std::endl;
    std::cout << "4. Complete List" << std::endl;
    std::cout << "0. Exit" << std::endl;
}

void ToDo::add(int &position, std::string &task)
{
    try
    {
        if (!(list.insert(position,task)))
        {
            throw position;
        }
    }
    catch(int &myPosition)
    {
        std::cout << "Error: you have inputted a priority out of bounds of current list. Please try again." << std::endl;
    }
    
}

void ToDo::remove(int &position)
{
    try
    {
        if ((position - 1) > list.getLength() || list.getLength() == 0)
        {
            throw position;
        }

        std::cout << "Completed: " << list.getEntry(position) << std::endl;
        list.remove(position);
    }
    catch(int &myPosition)
    {
        std::cout << "Error: you have inputted a position out of bounds of current list. Please try again." << std::endl;
    }
    
}

void ToDo::clear()
{
    list.clear();
    std::cout << "Congratulations! List Complete!" << std::endl;
}

void ToDo::displayList()
{
    if (list.isEmpty())
    {
        std::cout << "No tasks currently!" << std::endl;
    }
    else
    {
        for (int i = 0; i < list.getLength(); i++)
        {
            std::cout << (i+1) << ". " << list.getEntry(i+1) << std::endl;
        }
    }
}