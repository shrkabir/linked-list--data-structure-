#include "LinkedL.h"
#include <iostream>
//#include "node.h"
using namespace std;

LinkedList::LinkedList()
{
    head=NULL;
}

bool LinkedList::IsEmpty()
{
    if(head==NULL)
        cout<<"The list is Empty\n";
    else
        cout<<"The List is not empty\n";
}
void LinkedList::MakeEmpty()
{
    Node *EmptyPtr=head;
    while(EmptyPtr!=NULL)
    {
        EmptyPtr->next=NULL;
        EmptyPtr=EmptyPtr->next;
    }
}
void LinkedList::InsertAtFirst(int number)
{
    Node *NewNode;
    NewNode= new Node;
    NewNode->value=number;
    NewNode->next=NULL;
    if(head==NULL)
        head=NewNode;
    else
        NewNode->next=head;
    head=NewNode;
}
void LinkedList::InsertAtMiddle(int num,int dest)
{
    Node *prev=head;
    Node *NewNodeM;
    NewNodeM=new Node;
    NewNodeM->value=num;
    NewNodeM->next=NULL;
    while(prev->value!=dest)
    {
        prev=prev->next;
    }
    NewNodeM->next=prev->next;
    prev->next=NewNodeM;
}

void LinkedList::InsertAtLast(int lastnum){
Node *LastNodePtr=head;
Node *NewLastNode;
NewLastNode=new Node;
NewLastNode->value=lastnum;
NewLastNode->next=NULL;
while(LastNodePtr->next!=NULL)
{
    LastNodePtr=LastNodePtr->next;
}
//NewLastNode->next=LastNodePtr->next;
LastNodePtr->next=NewLastNode;
}

void LinkedList::DeleteAtFirst()
{
    Node *DeletefirstNode=head;
    if(head!=NULL)
    {
        DeletefirstNode=DeletefirstNode->next;
    }

}

void LinkedList::DeleteAtMiddle(int number)
{
    Node *prev,*deletemiddlenode=head;
    while(prev->value!=number)
    {
        prev=prev->next;
        deletemiddlenode=deletemiddlenode->next;
    }
    deletemiddlenode->next=NULL;

}

void LinkedList::Display()
{
    Node *displayPtr=head;
    //displayPtr=new Node;
    while(displayPtr!=NULL)
    {
        cout<<displayPtr->value<<"\n";
        displayPtr=displayPtr->next;
    }
}
