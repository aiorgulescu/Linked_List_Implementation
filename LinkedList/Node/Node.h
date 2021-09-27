#ifndef NODE_H
#define NODE_H

#include <iostream>


template<class ItemType>
class Node{

    ItemType item;
    Node<ItemType> *next;

    public:
        Node();
        Node(const ItemType &newItem);
        Node(ItemType &newItem, Node<ItemType>* nextPtr);
        void setItem(ItemType &newItem);
        void setNext(Node<ItemType>* nextPtr);

        ItemType getItem()const;
        Node<ItemType>* getNext()const;

        ~Node() {}



};

#include "Node.cpp"

#endif