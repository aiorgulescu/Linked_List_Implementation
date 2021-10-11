#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "ListInterface.h"
#include "Node/Node.h"

template<class ItemType>
class LinkedList : public ListInterface<ItemType>{

    Node<ItemType> *headPtr;
    int size;

    public:
    LinkedList();

    bool isEmpty() const override;
    int getLength() const override;
    bool insert(int newPosition, const ItemType& newEntry) override;
    bool remove(int position) override;
    void clear() override;
    ItemType getEntry(int position) const override;
    ItemType replace(int position, ItemType newEntry) override;
    

    virtual ~LinkedList();



};

#include "LinkedList.cpp"
#endif