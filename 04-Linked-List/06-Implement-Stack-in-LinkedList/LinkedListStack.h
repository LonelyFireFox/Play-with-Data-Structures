//
// Created by hpf on 18-5-7.
//

#ifndef DATASTRUCTURE_WITH_C_LINKEDLISTSTACK_H
#define DATASTRUCTURE_WITH_C_LINKEDLISTSTACK_H

#include "Stack.h"
#include "LinkedList.h"

template<class T>
class LinkedListStack : public Stack<T> {
public:
    LinkedListStack() {
        linkedlist = new LinkedList<T>();
    }

    int getSize() {
        return linkedlist->getSize();
    }

    void push(T e) {
        linkedlist->addFirst(e);
    }

    T pop() {
        linkedlist->removeFirst();
    }

    T peek() {
        linkedlist->getFirst();
    }

    bool isEmpty() {
        return linkedlist->isEmpty();
    }

    void print() {
        std::cout << "Stack: size = " << linkedlist->getSize() << std::endl;
        std::cout << "bottom ";
        linkedlist->toPrint();
        std::cout << " top" << std::endl;
    }

private:
    LinkedList<T> *linkedlist;
};

#endif //DATASTRUCTURE_WITH_C_LINKEDLISTSTACK_H
