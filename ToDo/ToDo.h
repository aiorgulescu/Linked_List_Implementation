#ifndef TO_DO_H
#define TO_DO_H

#include "LinkedList/LinkedList.h"

class ToDo
{
    LinkedList<std::string> list;

    public:
    ToDo(){}
    void displayMenu();
    void add(int &position, std::string &task);
    void remove(int &position);
    void clear(); 
    void displayList();
    ~ToDo(){}
};

#endif