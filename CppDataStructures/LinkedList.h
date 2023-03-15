//
// Created by noah- on 3/14/2023.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstdlib>

template <typename T>
class ListNode {
public:
    T data;
    ListNode<T>* next;
    ListNode(T data, ListNode<T>* next);
    ListNode(T data);
};
template <typename T>
ListNode<T>::ListNode(T data) {
    this->data = data;
}

template <typename T>
ListNode<T>::ListNode(T data, ListNode<T>* next) {
    this->data = data;
    this->next = next;
}

template <typename T>
class LinkList {
    ListNode<T> head;
    int size;
    public:
        int add(T item);
        int remove(int index);
        void clear(void);
        int getSize(void);
        T get(int index);
};

template<typename T>



#endif //LINKEDLIST_H
