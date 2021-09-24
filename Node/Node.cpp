#ifndef NODE_CPP
#define NODE_CPP

#include "Node.h"


template<typename ItemType>
Node<ItemType>::Node() : next(nullptr) {}

template<typename ItemType>
Node<ItemType>::Node(const ItemType &newEntry): item(newEntry), next(nullptr){}

template<typename ItemType>
Node<ItemType>::Node(ItemType &newEntry, Node<ItemType>* nextPtr): item(newEntry), next(nextPtr){}

template<typename ItemType>
void Node<ItemType>::setItem(ItemType &newItem)
{
    item = newItem;
}

template<typename ItemType>
void Node<ItemType>::setNext(Node<ItemType>* nextPtr)
{
    next = nextPtr;
}

template<typename ItemType>
ItemType Node<ItemType>::getItem()const
{
    return item;
}

template<typename ItemType>
Node<ItemType>* Node<ItemType>::getNext()const
{
    return next;
}


#endif