//
// Created by noah- on 3/14/2023.
//

#ifndef ListNode_H
#define ListNode_H

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

#endif //LINKEDLIST_H
