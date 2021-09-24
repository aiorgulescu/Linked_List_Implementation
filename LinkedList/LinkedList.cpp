#ifndef LINKED_LIST_CPP
#define LINKED_LIST_CPP


#include "LinkedList.h"
#include <iostream>

template<typename ItemType>
LinkedList<ItemType>::LinkedList() : headPtr(nullptr), size(0) {}

template<typename ItemType>
bool LinkedList<ItemType>::isEmpty() const
{
    return size == 0;
}

template<typename ItemType>
int LinkedList<ItemType>::getLength() const
{
    return size;
}

template<typename ItemType>
bool LinkedList<ItemType>::insert(int newPosition, const ItemType& newEntry)
{
    bool canDo = false;

    if (newPosition > 0 && (newPosition - 1) <= size)
    {
        canDo = true;

        Node<ItemType> *newItem = new Node<ItemType>(newEntry);
        if (newPosition == 1)
        {
            newItem->setNext(headPtr);
            headPtr = newItem;
        }
        else
        {
            Node<ItemType> *currPtr = headPtr;
            for (int i = 0; i < (newPosition - 2); i++)
            {
                currPtr = currPtr->getNext();
            }
            newItem->setNext(currPtr->getNext());
            currPtr->setNext(newItem);

        }

        size++;
    }

    return canDo;
}

template<typename ItemType>
bool LinkedList<ItemType>::remove(int position)
{
    bool CanDo = false;

    if (position > 0 && (position <= size))
    {
        CanDo = true;

        Node<ItemType>* temp = headPtr;

        if (position == 1)
        {
            headPtr = headPtr->getNext();
            delete temp;
        }
        else
        {
            for (int i = 0; i < (position - 2); i++)
            {
                temp = temp->getNext();
            }
                temp->setNext(temp->getNext()->getNext());
                temp = temp->getNext();
                delete temp;
        }
        size--;

    }
    return CanDo;

}

template <typename ItemType>
void LinkedList<ItemType>::clear()
{

    //  while (size != 1)
    // {
    //     size--;
    //     Node<ItemType> *currPtr = headPtr;
    //     headPtr = headPtr->getNext();
    //     std::cout << "Deleting " << currPtr->getItem() << std::endl;
    //     delete currPtr;
    // }

    // size = 0;
    

    while (headPtr != nullptr)
    {
        size--;
        Node<ItemType> *currPtr = headPtr;
        headPtr = headPtr->getNext();
        delete currPtr;
    } 
}


template<typename ItemType>
ItemType LinkedList<ItemType>::getEntry(int position) const
{
    try
    {
        if (position < 0 || position > size)
        {
            throw position;
        }

        Node<ItemType> *curr = headPtr;

        for (int i = 0; i < (position - 1); i++)
        {
            curr = curr->getNext();
        }

        return curr->getItem();
    }
    catch(int &myPosition)
    {
        std::cout << "Error. Entry does not exist in specified position" << std::endl;
    }

}

template <typename ItemType>
ItemType LinkedList<ItemType>::replace(int position, ItemType newEntry) 
{

    try
    {
        if (position < 0 || position > size)
        {
            throw position;
        }

        Node<ItemType> *curr = headPtr;
        ItemType tempItem;

        for (int i = 0; i < (position - 1); i++)
        {   
            curr = curr->getNext();
        }
        tempItem = curr->getItem();
        curr->setItem(newEntry);

        return tempItem;
    }
    catch(int &myPosition)
    {
        std::cout << "Error. Invalid position: " << myPosition << std::endl;
    }

}

template <typename ItemType>
LinkedList<ItemType>::~LinkedList()
{
    if (size != 0)
    {
        clear();
    }
}
#endif 
