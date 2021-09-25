#ifndef LINKEDL_H
#define LINKEDL_H
#include "node.h"

class LinkedList{
public:
    Node *head;
    LinkedList();
    //void IsFull();
    bool IsEmpty();
    void MakeEmpty();
    void InsertAtFirst(int number);
    void InsertAtMiddle(int num,int dest);
    void InsertAtLast(int lastnum);
    void DeleteAtFirst();
    void DeleteAtMiddle(int number);
    void DeleteAtLast();
    void Display();
};
#endif // LINKEDL_H
